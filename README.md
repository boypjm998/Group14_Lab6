# Group14_Lab6
2020/12/12 呼吸灯

myBlink.cpp和myBlink.h文件为库文件。
除了构造函数外包含三个函数：
void myblink(bool value);                                     //value为ON/OFF，输入ON则持续闪灯。

void myblink(bool value, int blinklength);                    //blinklength为呼吸灯闪烁周期，数字越大闪烁速度越慢。

void myblink(bool value, int blinklength, int blinkloops);    //blinkloops为呼吸灯闪烁次数，达到输入的次数后呼吸灯将不再闪烁。
