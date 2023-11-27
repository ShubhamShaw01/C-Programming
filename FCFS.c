//FCFS
#include <stdio.h>

struct
{
    int burst_time;
    int priority;
    int waiting_time;
    int turn_around_time;
} p[10];

int main()
{
    int n, type;
    printf("Enter the number of processes you have: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the process burst time and its priority simultaneously: ");
        scanf("%d%d", &p[i].burst_time, &p[i].priority);
    }
    int g = 0;
    float avg_fcfs_waiting_time = 0;
    for (int i = 0; i < n; i++)
    {
        g += p[i].burst_time;
        p[i].turn_around_time = g;
        p[i].waiting_time = p[i].turn_around_time - p[i].burst_time;
        avg_fcfs_waiting_time += p[i].waiting_time;
    }
    avg_fcfs_waiting_time = (float)(avg_fcfs_waiting_time / n);
    printf("FCFS: %g\n", avg_fcfs_waiting_time);

    return 0;
}
