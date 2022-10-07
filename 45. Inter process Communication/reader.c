// reader
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/shm.h>
#include <unistd.h>

int main() {
  int shmid;
  char buff[100];
  void *shared_mem;

  shmid = shmget((key_t)2345, 1024, 0666);
  printf("Key of the shared memory is: %d\n", shmid);

  shared_mem = shmat(shmid, NULL, 0);
  printf("Process attached to : %p\n", shared_mem);

  printf("Data u wrote: %s\n", (char *)shared_mem);
}