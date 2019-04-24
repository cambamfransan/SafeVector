#include <iostream>
#include "SafeQueueLib/SafeQueue.hpp"

int main() 
{
  SafeQueue queue;

  queue.push(3);

  std::cout << queue.size() << std::endl;

  queue.pop();

  std::cout << queue.size() << std::endl;

  return 0;
}
