#include <iostream>
using namespace std;
int main()
{
 const int change1=12;//Ӣ����Ӣ��
const int change2=0.02544;//Ӣ������
const int change3=2.2;//kg���
double BMI;
int sg1;//���Ӣ�߲���
int sg2;//���Ӣ�粿��
int sg;
double tz;//����
cout<<"����������ߣ���Ӣ�߼�Ӣ�磩��";
cin>>sg1;
cin>>sg2;
cout<<"������������أ�������";
cin>>tz;
sg=sg1*12+sg2;//Ӣ��

cout<<"���Ϊ"<<sg<<"Ӣ��"<<endl;
sg=sg*0.0254;//��
tz=tz/2.2;//kg
BMI=sg/tz;
cout<<"���BMIֵΪ"<<BMI;
return 0;


}
