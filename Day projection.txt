#include <iostream>



//decclartion of calender which will house our function with data that pretains to calender dates

class calender {
   
    
public:
    //here is the fuction that will just echo the number that you put in so the user can acknowledge if thier input matches thier intutuion

    std::string day_of_the_week(int today_date) {

        // A switch was used here because we are working just with intergers between 1-7 you dont have to use switches you can use if and else statements but for this case it looks a lot more cleaner

        switch (today_date) {

        case 1:
            return "Today date is Monday\n";
            break;

        case 2:
            return "Today date is Tuesday\n";


        case 3:
            return "Today date is Wednesday\n";
            break;

        case 4:
            return "Today date is Thursday\n";
            break;

        case 5:
            return "Today date is Friday\n";
            break;


        case 6:
            return "Today date is Saturday\n";
            break;

        case 7:
            return "Today date is Sunday\n";
            break;




        }
    }

    //this is where the magic happens this will tkae the interger for the compute day_project to declare the day that matches the number that was produced

    std::string day_projection(int day_projection) {

        //Again a switch was used here because its more clean and seperated then and a if and else situation

        switch (day_projection) {

        case 1:
            return "The date would be date is Monday\n";
            
            break;

        case 2:
            return "The date would be is Tuesday\n";


        case 3:
            return "The date would be is Wednesday\n";
            break;

        case 4:
            std::cout << "The date would be is Thursday\n";
            break;

        case 5:
            return "The date would be is Friday\n";
            break;


        case 6:
            return "The date would be is Saturday\n";
            break;

        case 7:
            return "The date would be is Sunday\n";
            break;




        }
    }





    };


//dont forget to declare the class and the functions within to make sure that the int main will recongize it when it called on

class calender;
int day_of_the_week(int today_date);
int day_projection(int day_pojected);



int main()
{

    //initalization of the two variables needed which would be today's date and the number of days they want to project the date

    int today_date = 0;
    int day_projection_num = 0;
    
    //Asking for the variable for todays date this can be cleaned alot more by getting an input of a string and making that string equal to certain value
    
    
    std::cout << "What is the day today in number 1-7 Mon = 1 and Sun = 7\n";
    std::cin >> today_date;
    
    //the class that its calling for this vaiable is calender which listed above and the object is day so when day is used then it stores within day

    calender day;
    day.day_of_the_week(today_date);
    std::cout << day.day_of_the_week(today_date);
    


 

    //This is taking in the input of the number of days it wants to know

    std::cout << "Day of the week in the number of:\n";
    std::cin >> day_projection_num;
   

    /*Here is the projection equation its the the date that they stated + the number of days they want to project, the module will get remainder from 1 - 7 which based on the total of the previous values
     for example 4(thurday) and 14 days from now would be a thursday. The equation can be more easily explained if the % 7 is distrubed so today date % 7 will produce a  1-7 however the % 7 once distrubed
     to day_projection_num will have range 0-7 therefore when its something like 14 which is just 2 weeks of the same day of the week then its produce 0 value so in total of the todays date % 7 will equal
     a range of 1-7 and the day_projection_num will be 0 therefore giving you the date again*/

    int day_projection = (today_date + day_projection_num) % 7;
    
    
    //calling the function for the value day_projection

    day.day_projection(day_projection);
    std::cout << day.day_projection(day_projection);



    



    system("pause>0");
}


 
