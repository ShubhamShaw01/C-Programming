#include <stdio.h>

struct Process
{
    int burst_time;
    int priority;
    int remaining_time;
    int waiting_time;
    int turn_around_time;
};

int main()
{
    int n, time_quantum;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter burst time and priority simultenously: ", i + 1);
        scanf("%d%d", &processes[i].burst_time,&processes[i].priority);
        processes[i].remaining_time = processes[i].burst_time;
        processes[i].waiting_time = 0;
        processes[i].turn_around_time = 0;
    }

    printf("Enter the time quantum: ");
    scanf("%d", &time_quantum);

    int time = 0;
    int completed = 0;

    while (completed < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (processes[i].remaining_time > 0)
            {
                int execution_time = (processes[i].remaining_time < time_quantum) ? processes[i].remaining_time : time_quantum;

                processes[i].remaining_time -= execution_time;
                time += execution_time;

                if (processes[i].remaining_time == 0)
                {
                    completed++;
                    processes[i].turn_around_time = time;
                    processes[i].waiting_time = processes[i].turn_around_time - processes[i].burst_time;
                }
            }
        }
    }

    // Calculate average waiting time
    float avg_waiting_time = 0;
    for (int i = 0; i < n; i++)
    {
        avg_waiting_time += processes[i].waiting_time;
    }
    avg_waiting_time /= n;
    printf("Average Waiting Time: %g\n", avg_waiting_time);

    return 0;
}
