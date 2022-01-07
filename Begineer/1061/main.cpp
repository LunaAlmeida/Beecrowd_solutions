#include <iostream>
#include <string>

using namespace std;

int main()
{
    int start_day, end_day, start_hour, start_minute, end_hour, end_minute, start_second, end_second;
    int total_day, total_hour, total_minute, total_second, total_start_time, total_end_time, total_time;
    string aux;

    cin >> aux >> start_day;
    cin >> start_hour >> aux >> start_minute >> aux >> start_second;
    cin >> aux >> end_day;
    cin >> end_hour >> aux >> end_minute >> aux >> end_second;

    total_day = (end_day - start_day) - 1;

    if(total_day >= 0 )
    {
        if(end_hour >= start_hour && (end_minute >= start_minute ))
        {
            total_day++;
        }else if(end_hour >= start_hour && end_minute == start_minute && end_second >= start_second)
        {
            total_day++;
        }
    }else
    {
        total_day = 0;
    }

    total_start_time = (start_hour * 3600) + (start_minute * 60) + (start_second);
    total_end_time = (end_hour * 3600) + (end_minute * 60) + (end_second);

    total_time = total_end_time - total_start_time;

    if(total_time > 0)
    {
        total_minute = total_time / 60;
        total_second = total_time % 60;
        total_hour = total_minute / 60;
        total_minute = total_minute % 60;
    }else if(total_time < 0)
    {
        total_start_time = ((23 - start_hour) * 3600) + ((59 - start_minute) * 60) + (60 - start_second);
        total_end_time = (end_hour * 3600) + (end_minute * 60) + (end_second);

        total_time = total_end_time + total_start_time;

        total_minute = total_time / 60;
        total_second = total_time % 60;
        total_hour = total_minute / 60; 
        total_minute = total_minute % 60;      

    }else
    {
        total_minute = 0;
        total_second = 0;
        total_hour = 0;
    }

    cout << total_day << " dia (s)" << endl;
    cout << total_hour << " hora (s)" << endl;
    cout << total_minute << " minuto (s)" << endl;
    cout << total_second << " segundo (s)" << endl;
    return 0;
}