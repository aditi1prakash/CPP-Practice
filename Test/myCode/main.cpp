#include<bits/stdc++.h>

using namespace std;

#include <algorithm>

typedef struct {
    int start_time;
    int duration;
    int end_time;
}workshop_t;

struct Available_Workshops{
    int N;
    workshop_t *workshop;

    Available_Workshops(int &n)
    {
    	N = n;
    	workshop = new workshop_t[n];
    }
};

Available_Workshops* initialize (int start_time[], int duration[], int n)
{
    Available_Workshops *obj = new Available_Workshops(n);

    for (int i = 0; i < n; i++)
    {
        ((obj->workshop) + i)->start_time = start_time[i];
        ((obj->workshop) + i)->duration = duration[i];
        ((obj->workshop) + i)->end_time = start_time[i] + duration[i];
    }

    return obj;
}

int CalculateMaxWorkshops (Available_Workshops *ptr)
{
    int maxWorkshops{0};

    //sort
    std::sort(ptr->workshop, (ptr->workshop)+ptr->N, [](workshop_t &a, workshop_t &b)
    		{return (a.end_time < b.end_time);});

//    for (int i = 0; i < ptr->N; i++)
//    {
//        for (int j = 1; j < ptr->N; j++)
//        {
//            if (ptr->workshop[i].end_time > ptr->workshop[j].end_time)
//            {
//                std::swap(ptr->workshop[i].end_time, ptr->workshop[j].end_time);
//            }
//        }
//    }

    //count
//    for(int i = 0; i < ptr->N; i++)
//    {
//        if (((ptr->workshop) + i + 1)->start_time > ((ptr->workshop) + i)->end_time)
//        {
//            maxWorkshops++;
//        }
//    }

    int curEnd = 0;

    for(auto i = ptr->workshop; i != (ptr->workshop) + ptr->N; ++i){
        if(i->start_time >= curEnd)
        {
        	maxWorkshops++;
            curEnd = i->end_time;
        }
    }
    return maxWorkshops;
}

int main(int argc, char *argv[]) {
    int n = 6; // number of workshops
//    cin >> n;
    // create arrays of unknown size n
    int start_time[6] = {1, 3, 0, 5, 5, 8}; //new int[n];
    int duration[6] = {1, 1, 6, 2, 4, 1};//new int[n];

//    for(int i=0; i < n; i++){
//        cin >> start_time[i];
//    }
//    for(int i = 0; i < n; i++){
//        cin >> duration[i];
//    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
