// THE UNIVERSITY OF GHANA GRADING SYSTEM.

#include <iostream>

using namespace std;

int main()
{
    int ExaminationScore;

    cout <<"PLEASE ENTER EXAMINATION SCORE"<<endl;

    cin>>ExaminationScore;

    if ((ExaminationScore>80) &&(ExaminationScore <100))
    {
        cout<<"YOUR GRADE IS:"<<"A:"<<"EXCELLENT";
    }

   else if ((ExaminationScore>75) &&(ExaminationScore <80))

     {
        cout<<"YOUR GRADE IS:"<<"B+:"<<"VERY GOOD";
    }

   else if ((ExaminationScore>70) &&(ExaminationScore <75))

{
        cout<<"YOUR GRADE IS:"<<"B:"<<"GOOD";

    }

    else if ((ExaminationScore>65) &&(ExaminationScore <70))




  {
        cout<<"YOUR GRADE IS:"<<"C+:"<<"AVERAGE";

    }

    else if ((ExaminationScore>60) &&(ExaminationScore <65))

  {
        cout<<"YOUR GRADE IS:"<<"C+:"<<"BELOW AVERAGE";

    }

     else if ((ExaminationScore>55) &&(ExaminationScore <60))



    {
        cout<<"YOUR GRADE IS:"<<"D:"<<"PASS";

    }

     else if ((ExaminationScore>50) &&(ExaminationScore <55))


  {
        cout<<"YOUR GRADE IS:"<<"D:"<<"WEAK";

    }
     else if ((ExaminationScore>40) &&(ExaminationScore <50))


   {
        cout<<"YOUR GRADE IS:"<<"E:"<<" VERY WEAK";

    }


 else if ((ExaminationScore>0) &&(ExaminationScore <40))


    {
        cout<<"YOUR GRADE IS:"<<"F:"<<"FAIL";

    }




return 0;
}
