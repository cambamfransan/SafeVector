#ifndef SAFE_QUEUE_HPP
#define SAFE_QUEUE_HPP

#include <mutex>
#include <atomic>

class SafeQueue
{
public:
  SafeQueue()
    :m_storage(), m_size(0), m_begin(), m_end(), m_beginMutex(), m_endMutex()
  {
    m_storage = new int[10];
  }

  int pop()
  {
    std::scoped_lock<std::mutex> sc(m_beginMutex);
    m_size--; 
    m_begin++;
    return m_storage[m_begin-1];
  }

  void push(int toPush)
  {
    std::scoped_lock<std::mutex> sc(m_endMutex);
    m_storage[m_end] = toPush;
    m_end++;
    m_size++;
  }

  int size() { return m_size; }

  
private:
  int* m_storage;
  std::atomic<int> m_size;
  std::atomic<int> m_begin;
  std::atomic<int> m_end;
  std::mutex m_beginMutex;
  std::mutex m_endMutex;
};

#endif
