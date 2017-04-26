#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sched.h>
#include <unistd.h> /* for sleep */


int main()

{
    int n=5;
    pthread_t pthread_table[n];
    pthread_t watek, watek2;
    pthread_create( &watek, 0, (void* (*)(void *))fnc, NULL);
	usleep(500*1000);
    pthread_create( &watek2, 0, (void* (*)(void *))fnc2, NULL);
    getchar();

    return 0;

}

int main()
{

int n=6;
pthread_t pthread_table[n];
void * (*)(void *) fun_table[n];
for(int i=0; i<n; i++)
    pthread_create(&watek[i], 0, &fun_table[i], NULL;
}

