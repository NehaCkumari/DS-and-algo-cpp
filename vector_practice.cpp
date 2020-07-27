#include<bits/stdc++.h>
using namespace std;
/*int sum(vector<int> a)//not worked
{
   int l;
   vector<int>::iterator i=a.begin();
   //vector<int>::iterator j=a.end();//j is pointing next to the last value
   for(i=a.begin(); i<a.end(); i++)
   {
      cout<<*i<<endl;
   }
   //cout<<*i<<endl;
   //cout<<*j<<endl;
   //l=*i+*j;
   return l;
}*/
int sum1(vector<int> a)//not worked
{
   int l,m,n;
   vector<int>::iterator i=a.begin();
   vector<int>::iterator j=a.end();
   l=*i;
   m=*j;
   n=l+m;
   return n;

}

int sum2(vector<int> a)
{
   vector<int>::iterator i;
   i=a.end();
   cout<<*i;

   //j=a.end();

   return 0;

}

void add(vector<int> &arr)
{
   vector<int>::iterator i=arr.begin();
   arr.pop_back();
   //vector<int>::iterator j=arr.end();
   cout<<"--->"<<*i;
   //cout<<"--->"<<*j;//gives random value

}

void ad1(vector<int> *arr)
{
   //vector<int>::iterator i=arr.begin();
   //vector<int>::iterator j=arr.end();
   arr->pop_back();


   //cout<<"--->"<<*j;//gives random value

}

vector<int> reverse(vector<int> &arr)//want to return vector
{
   vector<int> v;
   //pop_back() return void
   v.push_back(arr.back());
   return v;

}
int main()
{
   vector<int> v1;//1 container formed
   vector<int> v2[3];//3 containers formed(2D)
   vector<vector<int>> v3;//2D
   vector<vector<int> >  matrix(4, vector<int>(4));
   vector<vector<int> >  matrix1(4, vector<int>(4,5)); // all values are now 5
   vector<int> v4(3);//initialise with size 3
   vector<int> v5(4,8);//value 8 at 4 places
   v1.push_back(11);
   v1.push_back(12);
   v1.push_back(13);
   v2[0].push_back(21);
   v2[0].push_back(22);
   v2[1].push_back(23);
   v2[2].push_back(24);
   //v3[0][1].push_back(31);//push_back gives error
   v4.push_back(41);
   v4.push_back(42);
   v4.push_back(43);
   //cout<<&v1;//address of v1
   //cout<<sum(v1);//a becomes copy of v1
   cout<<endl;
   cout<<"see "<<sum1(v1)<<endl;
   sum2(v1);
   add(v1);//call by reference
   vector<int> c=reverse(v1);
   cout<<c[0];
   return 0;
}