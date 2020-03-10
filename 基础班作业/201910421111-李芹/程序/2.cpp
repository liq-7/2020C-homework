#include <iostream>
using namespace std;
int main()
{
 const int change1=12;//英寸与英尺
const int change2=0.02544;//英寸与米
const int change3=2.2;//kg与磅
double BMI;
int sg1;//身高英尺部分
int sg2;//身高英寸部分
int sg;
double tz;//体重
cout<<"请输入你身高（几英尺几英寸）：";
cin>>sg1;
cin>>sg2;
cout<<"请输入你的体重（磅）：";
cin>>tz;
sg=sg1*12+sg2;//英寸

cout<<"身高为"<<sg<<"英寸"<<endl;
sg=sg*0.0254;//米
tz=tz/2.2;//kg
BMI=sg/tz;
cout<<"你的BMI值为"<<BMI;
return 0;


}
