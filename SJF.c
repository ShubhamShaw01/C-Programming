//SJF
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
            if(p[i].burst_time>p[j].burst_time){
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }
    int g = 0;
    float avg_sjf_waiting_time = 0;
    for (int i = 0; i < n; i++)
    {
        g += p[i].burst_time;
        p[i].turn_around_time = g;
        p[i].waiting_time = p[i].turn_around_time - p[i].burst_time;
        avg_sjf_waiting_time += p[i].waiting_time;
    }
    avg_sjf_waiting_time = (float)(avg_sjf_waiting_time / n);
    printf("SJF: %g\n", avg_sjf_waiting_time);

    return 0;
}
