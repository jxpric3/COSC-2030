#include <chrono>
#include <cmath>
#include <iostream>
#include <thread>
#include <vector>

using namespace std;

void fillArrayTask(long long *arr, long long start, long long end, int id);

int main()
{

  const long long arraySize = 10000000;
  long long chunk = arraySize / 4;

  long long start1 = 0 * chunk;
  long long end1 = 1 * chunk;

  long long start2 = 1 * chunk;
  long long end2 = 2 * chunk;

  long long start3 = 2 * chunk;
  long long end3 = 3 * chunk;

  long long start4 = 3 * chunk;
  long long end4 = arraySize; // ← handles remainder!

  long long *dynArray = new long long[arraySize];

  auto begin = chrono::high_resolution_clock::now();

  fillArrayTask(dynArray, 0, arraySize, 0);

  auto finish = chrono::high_resolution_clock::now();
  auto seqDuration =
      chrono::duration_cast<chrono::milliseconds>(finish - begin);

  cout << "Sequential time: " << seqDuration << " ms" << endl;

  auto start = chrono::high_resolution_clock::now();

  thread t1(fillArrayTask, dynArray, start1, end1, 1);
  cout << endl;
  thread t2(fillArrayTask, dynArray, start2, end2, 2);
  cout << endl;
  thread t3(fillArrayTask, dynArray, start3, end3, 3);
  cout << endl;
  thread t4(fillArrayTask, dynArray, start4, end4, 4);
  cout << endl;
  t1.join();
  t2.join();
  t3.join();
  t4.join();
  auto end = chrono::high_resolution_clock::now();
  auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

  cout << "time to run program " << duration << endl;

  return 0;
}

void fillArrayTask(long long *dynArray, long long start, long long end, int id)
{
  cout << "Thread " << id << " Starting indicies " << start << " to " << end - 1
       << endl;

  for (long long indx = start; indx < end; indx++)
  {
    dynArray[indx] = indx;
  }
  std::cout << "Thread " << id << " finished." << std::endl;
}
