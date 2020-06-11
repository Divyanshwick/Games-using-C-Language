#include<graphics.h>
#include<time.h>

int main()
{
        int gd = DETECT;
        int gm;
        initgraph(&gd,&gm,"");

        time_t rawTime;
        struct tm* currentTime;
        char a[100];
        while(1){
        rawTime=time(NULL);
        currentTime=localtime(&rawTime);
        strftime(a,100,"%H:%M:%S",currentTime);
        setcolor(11);
        settextstyle(3,HORIZ_DIR,10);
        outtextxy(100,100,a);

        strftime(a,100,"%p",currentTime);
        settextstyle(3,HORIZ_DIR,2);
        outtextxy(600,8,a);

        strftime(a,100,"%a,%d %b,%Y",currentTime);
        settextstyle(3,HORIZ_DIR,5);
        outtextxy(130,310,a);

        delay(1000);
    }

    getch();
    closegraph();
    return 0;
}
