#include<stdio.h>
#include<easyx.h>
//#include<graphics.h>
int main()
{
    initgraph(640, 480);//窗口单位像素
    setlinecolor(RGB(255, 106, 106));
    circle(100,200,50);
    setlinecolor(RED);//设置边框颜色
    setfillcolor(LIGHTBLUE);//设置填充颜色
    fillcircle(300, 200, 60);//填充圆
    solidcircle(500, 200, 70);//没有边框的填充圆

    setbkmode(TRANSPARENT);//设置文字字体透明 图片上写文字
    settextcolor(RGB(173, 216, 230));//设置文本颜色
    settextstyle(40, 0, L"微软雅黑");//设置文本大小和字体
    outtextxy(0, 0, L"图形库");//在指定位置输出文本
    outtextxy(20, 20, L"ABCD");//L表示多字节
    getchar();
    IMAGE img;//准备变量存放图片
  //  C:\Users\18080\Pictures\帅钢.jpg  绝对路径 细化每个文件夹
//    loadimage(&img, L"C:\\Users\\18080\\Pictures\\帅钢.jpg");//第二个参数是文件路径
//    loadimage(&img, L"C:/Users/18080/Pictures/帅钢.jpg");//可以用做斜杠替代
    loadimage(&img, L"123/帅钢.jpg");//相对路径
    initgraph(img.getwidth(),img.getheight());//图形库的大小由图片的宽和高决定
    //对于文件路径 可以用斜杠隔开/ \
    //代码里 字符串中\\ 表示\
    putimage(0, 0, &img);
    getchar();
    closegraph();//关闭窗口
    return 0;
}