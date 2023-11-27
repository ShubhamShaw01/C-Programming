//Priority
#include <stdio.h>

struct
{
    int burst_time;
    int priority;
    int waiting_time;
    int turn_around_time;
} p[10],t;

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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(p[i].priority>p[j].priority){
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }
    int g = 0;
    float avg_priority_waiting_time = 0;
    for (int i = 0; i < n; i++)
    {
        g += p[i].burst_time;
        p[i].turn_around_time = g;
        p[i].waiting_time = p[i].turn_around_time - p[i].burst_time;
        avg_priority_waiting_time += p[i].waiting_time;
    }
    avg_priority_waiting_time = (float)(avg_priority_waiting_time / n);
    printf("Prority: %g\n", avg_priority_waiting_time);

    return 0;
}
