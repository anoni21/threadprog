#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
 
void *thread_function(void *arg)
{
    int i;
    for ( i=0; i<20; i++ ) {
        printf("Thread says hi!\n");
        sleep(1);
    }
 
    return NULL;
}
 
int main()
{
    pthread_t mythread;
 
    if ( pthread_create( &mythread, NULL, thread_function, NULL) )
    {
        printf("error creating thread.");
        abort();
    }
 
    printf("Waiting for thread to finish...\n");
    if ( pthread_join ( mythread, NULL ) )
    {
        printf("error joining thread.");
        abort();
        }
 
    exit(0);
}
