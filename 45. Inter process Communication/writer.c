//writer
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>

int main()
{
  int shmid;
  char buff[100];
  void *shared_mem;

  shmid = shmget((key_t)2345, 1024, 0666 | IPC_CREAT);//creates shared memory segment with key 2345, having size 1024 bytes. IPC_CREAT is used to create the shared segment if it does not exist. 0666 are the permisions on the shared segment
  printf("Key of the shared memory: %d\n",shmid);

  shared_mem = shmat(shmid,NULL,0);
  printf("Process attached at %p\n",shared_mem);

  printf("Enter some data: ");
  read(0,buff,100);

  strcpy(shared_mem,buff);

  printf("\nYou wrote: %s",(char *)shared_mem);
}