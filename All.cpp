#include<iostream>
using namespace std;
main()
{
	cout<<"Enter the number of sides of the polygon: ";
	int sides;
	cin>>sides;
	int angles;
	angles=(sides-2)*180;
	cout<<"The sum of internal angles of a "<<sides<<"-sided polygon is: "<<angles<<" degrees";
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Number of Minutes: ";
	int min;
	cin>>min;
	cout<<"Frames per Second: ";
	int seconds;
	cin>>seconds;
	int frames;
	frames=min*seconds*60;
	cout<<"Total Number of Frames: "<<frames;
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter Initial Velocity (m/s): ";
	float iv;
	cin>>iv;
	cout<<"Enter Acceleration (m/s^2): ";
	float a;
	cin>>a;
	cout<<"Enter Time (s): ";
	int t;
	cin>>t;
	float fv;
	fv=a*t+iv;
	cout<<"Final Velocity (m/s): "<<fv;
	}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter Imposter Count: ";
	int i;
	cin>>i;
	cout<<"Enter Player Count: ";
	int p;
	cin>>p;
	int chance;
	chance=(i*100/p);
	cout<<"Chance of being an imposter: "<<chance<<"%";
	}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter the Name of the Person: ";
	string n;
	cin>>n;
	cout<<"Enter the target weight loss in kilograms: ";
	float w;
	cin>>w;
	float d;
	d=w*15;
	cout<<n<<" will need "<<d<<" days to lose "<<w<<" kg of weight by following the doctor's suggestions";
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	int s;
	cin>>s;
	cout<<"Enter the cost of the bag: $";
	int c;
	cin>>c;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	float a;
	cin>>a;
	int f;
	f=c/s;
	cout<<"Cost of fertilizer per pound: $"<<f<<endl;
	int sf;
	sf=c/a;
	cout<<"Cost of fertilizing per square foot: $"<<sf;
	}
#include<iostream>
using namespace std;
main()
{	

	int adult;
	int child;
	int adultTS;
	int childTS;
	int charity;
	
	cout<<"Enter the movie name: ";
	string movieName;
	cin>>movieName;
	cout<<"Enter the adult ticket price: $";
	cin>>adult;
	cout<<"Enter the child ticket price: $";
	cin>>child;
	cout<<"Enter the number of adult tickets sold: ";
	
	cin>>adultTS;
	cout<<"Enter the number of child tickets sold: ";
	
	cin>>childTS;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	
	cin>>charity;
	cout<<endl;
	int ticketSales;
	ticketSales=(adultTS*adult)+(childTS*child);
	int donation;
	donation=ticketSales*0.1;
	int remaining;
	remaining=ticketSales-donation;
	cout<<"Movie: "<<movieName<<endl;
	cout<<"Total amount generated from ticket sales: $"<<ticketSales<<endl;
	cout<<"Donation to charity ("<<charity<<"%): $"<<donation<<endl;
	cout<<"Remaining amount after donation: $"<<remaining;
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter vegetable price per kilogram (in coins): ";
	float vegetablePrice;
	cin>>vegetablePrice;
	cout<<"Enter fruit price per kilogram (in coins): ";
	float fruitPrice;
	cin>>fruitPrice;
	cout<<"Enter total kilograms of vegetables: ";
	int totalKg;
	cin>>totalKg;
	cout<<"Enter total kilograms of fruits: ";
	int totalKgF;
	cin>>totalKgF;
	float rupees;
	rupees=((vegetablePrice*totalKg)+(fruitPrice*totalKgF))/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<rupees;
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter a 4-digit number: ";
	int sum;
	cin>>sum;
	int a;
	a=sum%10;
	int b;
	b=(sum/10)%10;
	int c;
	c=(sum/100)%10;
	int d;
	d=(sum/1000)%10;
	int e;
	e=a+b+c+d;
	cout<<"Sum of the individual digits: "<<e;
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Number 1: ";
	int a;
	cin>>a;
	cout<<"Number 2: ";
	int b;
	cin>>b;
	cout<<"Number 3: ";
	int c;
	cin>>c;
	cout<<"Number 4: ";
	int d;
	cin>>d;
	cout<<"Number 5: ";
	int e;
	cin>>e;
	cout<<"Number 6: ";
	int f;
	cin>>f;
	cout<<"Number 7: ";
	int g;
	cin>>g;
	cout<<"Number 8: ";
	int h;
	cin>>h;
	cout<<"Number 9: ";
	int i;
	cin>>i;
	cout<<"Number 10: ";
	int j;
	cin>>j;
	cout<<"Number 11: ";
	int k;
	cin>>k;
	cout<<"Number 12: ";
	int l;
	cin>>l;
	cout<<"Number 13: ";
	int m;
	cin>>m;
	cout<<"Number 14: ";
	int n;
	cin>>n;
	cout<<"Number 15: ";
	int o;
	cin>>o;
	int p;
	p=a+b+c+d+e;
	int q;
	q=f*g*h*i*j;
	int r;
	r=k-l-m-n-o;
	int s;
	s=p+q;
	int t;
	t=s-r;
	cout<<"The final result is: "<<t;
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter the person's age: ";
	int personAge;
	cin>>personAge;
	cout<<"Enter the number of times they've moved: ";
	int noOfTimes;
	cin>>noOfTimes;
	int years;
	years=personAge/(noOfTimes+1);
	cout<<"Average number of years lived in the same house: "<<years;
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Number of square meters you can paint: ";
	int sq;
	cin>>sq;
	cout<<"Width of the single wall (in meters): ";
	int width;
	cin>>width;
	cout<<"Height of the single wall (in meters): ";
	int height;
	cin>>height;
	int noOfWalls;
	noOfWalls=sq/(width*height);
	cout<<"Number of walls you can paint: "<<noOfWalls;
}
#include<iostream>
using namespace std;
main()
{
	int num1;
	int num2;
	cout<<"Number 1: ";
	cin>>num1;
	num2=num1;
	cout<<"Number 2: ";
	cin>>num1;
	num2=num2+num1;
	cout<<"Number 3: ";
	cin>>num1;
	num2=num2+num1;
	cout<<"Number 4: ";
	cin>>num1;
	num2=num2+num1;
	cout<<"Number 5: ";
	cin>>num1;
	num2=num2+num1;
	cout<<"Total sum of integers is: "<<num2;
}
#include<iostream>
using namespace std;
void comparision(int fn, int sn);
main()
{
	cout<<"Enter the first number: ";
	int fn;
	cin>>fn;
	cout<<"Enter the second number: ";
	int sn;
	cin>>sn;
	if(sn==fn){
	cout<<"true";
}
	else{
	cout<<"false";
}
}
#include<iostream>
using namespace std;
void corrction(string statement);
main()
{
	cout<<"Enter 'true' or 'false': ";
	string statement;
	cin>>statement;
	if(statement=="true"){
	cout<<"false";
}
	if(statement=="false"){
	cout<<"true";
}
}
#include<iostream>
using namespace std;
void ticketPrice (string country, float price);
main()
{
	cout<<"Enter the country's name: ";
	string country;
	cin>>country;
	cout<<"Enter the ticket price in dollars: $";
	float price;
	cin>>price;
	if(country=="Pakistan"){
	float discount;
	discount=price*0.05;
	float discountPrice;
	discountPrice=price-discount;
	cout<<"Final ticket price after discount: $"<<discountPrice;
}
	if(country=="Ireland"){
	float discount;
	discount=price*0.10;
	float discountPrice;
	discountPrice=price-discount;
	cout<<"Final ticket price after discount: $"<<discountPrice;
}
	if(country=="India"){
	float discount;
	discount=price*0.20;
	float discountPrice;
	discountPrice=price-discount;
	cout<<"Final ticket price after discount: $"<<discountPrice;
}
	if(country=="England"){
	float discount;
	discount=price*0.30;
	float discountPrice;
	discountPrice=price-discount;
	cout<<"Final ticket price after discount: $"<<discountPrice;
}
	if(country=="Canada"){
	float discount;
	discount=price*0.45;
	float discountPrice;
	discountPrice=price-discount;
	cout<<"Final ticket price after discount: $"<<discountPrice;
}
}
#include<iostream>
using namespace std;
void checkSpeed(int speed);
main()
{
	cout<<"Speed: ";
	int speed;
	cin>>speed;
	if(speed>100){
	cout<<"Halt... YOU WILL BE CHALLENGED!!!";
}
	if(speed==100){
	cout<<"Perfect! You're going good.";
}
	if(speed<100){
	cout<<"Perfect! You're going good.";
}
} 
#include<iostream>
using namespace std;
void bonus(int position, int freindsPosition);
main()
{
	cout<<"Enter your position: ";
	int position;
	cin>>position;
	cout<<"Enter your friend's position: ";
	int freindsPosition;
	cin>>freindsPosition;
	if(position+6>freindsPosition){
	cout<<"true";
}
	if(position+6==freindsPosition){
	cout<<"true";
}
	if(position+6<freindsPosition){
	cout<<"false";
}
}
#include<iostream>
using namespace std;
void longestDuration(int hours, int minutes);
main()
{
	cout<<"Enter the number of hours: ";
	int hours;
	cin>>hours;
	cout<<"Enter the number of minutes: ";
	int minutes;
	cin>>minutes;
	int min;
	min=hours*60;
	if(min>minutes){
	cout<<hours;
}
	if(minutes>min){
	cout<<minutes;
}
}
#include<iostream>
using namespace std;
void flowerShop(int rrose, int wrose, int tulips, float oprice, float price);
main()
{
	cout<<"Red Rose: ";
	int rrose;
	cin>>rrose;
	cout<<"White Rose: ";
	int wrose;
	cin>>wrose;
	cout<<"Tulips: ";
	int tulips;
	cin>>tulips;
	float oprice;
	oprice=rrose*2.00+wrose*4.10+tulips*2.50;
	cout<<"Original Price: $"<<oprice<<endl;	
	if(oprice>200){
	float discount;
	discount=oprice*0.20;
	float price;
	price=oprice-discount;
	cout<<"Price after Discount: $"<<price;
}
	if(oprice<200){
	cout<<"No discount applied.";
}
	if(oprice==200){
	float discount;
	discount=oprice*0.20;
	float price;
	price=oprice-discount;
	cout<<"Price after Discount: $"<<price;
}
}
#include<iostream>
using namespace strd;
void pet(int holidays);
main()
{
	cout<<"Holidays: ";
	int holidays;
	cin>>holidays;
	int time;
	time=holidays*127;
	int workingDays;
	workingDays=365-holidays;
	int twd;
	twd=workingDays*63;
	int totaltime;
	totaltime=time+twd;
	int difference;
	difference=30000-totaltime;
	if(difference<30000){
	int n;
	n=difference/60;
}
#include<iostream>
using namespace std;
void tpCalculations(int people, int tp);
main(){
	cout<<"Number of people in the household: ";
	int people;
	cin>>people;
	cout<<"Number of rolls of TP: ";
	int tp;
	cin>>tp;
	int sheets;
	sheets=tp*500;
	int totalPeople;
	totalPeople=people*57;
	int days;
	days=sheets/totalPeople;
	if(days<14){
	cout<<"Your TP will only last "<<days<<" days, buy more!";
}
	if(days>14){
	cout<<"Your TP will last "<<days<<" days, no neeed to panic!";
}
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter weight in pounds: ";
	float pound;
	cin>>pound;
	float weight;
	weight=pound*0.45;
	cout<<pound<<" pounds is equal to "<<weight<<"kilograms.";
}
#include<iostream>
using namespace std;
main()
{
	cout << "Enter the length of the rectangle: ";
	float length;
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	float width;
	cin >> width;
	float area;
	area=length*width;
	cout << "The area of the rectangle is: "<<area;
}
#include<iostream>
using namespace std;
main()
{
	cout << "Enter the charge (Q) in Coulombs: ";
	float charge;
	cin >> charge;
	cout << "Enter the time (t) in seconds: ";
	float time;
	cin >> time;
	float current;
	current=charge/time;
	cout << "The current (I) is: " << current << " Amperes";
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter the student's name: ";
	string name;
	cin>>name;
	cout<<"Enter matriculation marks (out of 1100): ";
	float mm;
	cin>>mm;
	cout<<"Enter intermediate marks: ";
	float im;
	cin>>im;
	cout<<"Enter Ecat marks: ";
	float em;
	cin>>em;
	float agg;
	agg=((mm/1100*0.1)+(im/550*0.4)+(em/400*0.5))*100;
	cout<<"Aggregate score for "<<name<<" in UET is: "<<agg<<"%";
	}
#include<iostream>
using namespace std;
main()
{
	cout << "Enter the size in megabytes (MB): ";
	float mb;
	cin >> mb;
	float b;
	b=mb*1024*1024*8;
	cout << mb <<" MB is equivalent to "<<b<<" bits.";
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter the number of hours: ";
	float a;
	cin>>a;
	float s;
	s=a*60*60;
	cout<<a<<" hours is equivalent to "<<s<<" seconds.";
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter voltage (in volts): ";
	float v;
	cin>>v;
	cout<<"Enter current (in amperes): ";
	float c;
	cin>>c;
	float p;
	p=c*v;
	cout<<"The power is "<<p<<" watts.";
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter your age in years: ";
	float y;
	cin>>y;
	float d;
	d=y*365;
	cout<<"Your age in days is approximately "<<d<< " days.";
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter the name of the cricket team: ";
	string c;
	cin>>c;
	cout<<"Enter the number of wins: ";
	int w;
	cin>>w;
	cout<<"Enter the number of draws: ";
	int d;
	cin>>d;
	cout<<"Enter the number of losses: ";
	int l;
	cin>>l;
	int o;
	o=(w*3)+(d*1)+(l*0) ;
	cout<<c<<" has obtained "<<o<<" points in the Asia Cup tournament." ;
}
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter the current world population: ";
	int w;
	cin>>w;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	int b;
	cin>>b;
	int t;
	t=b*360+w;
	cout<<"The population in three decades will be: "<<t;
} 
#include<iostream>
using namespace std;
main()
{
cout<<"Enter your Name: ";
string Name;
cin>>Name;

cout<<"Enter your roll number: ";
int rollnumber;
cin>>rollnumber;

cout<<"Enter your aggregate: ";
float aggregate;
cin>>aggregate;

cout<<"Enter your section: ";
char section;
cin>>section;
cout<<"Student Information:"<<endl;
cout<<"Name: "<<Name<<endl;
cout<<"Roll Number: "<<rollnumber<<endl;
cout<<"Aggregate: "<<aggregate<<endl;
cout<<"Section: "<<section<<endl;
}
#include<iostream>
using namespace std;

void calculatefuel(float distance);

main()
{
	float distance;
	cout<<"Enter the distance: ";
	cin>>distance;
	calculatefuel(distance);
}

void calculatefuel(float distance)
{
	float fuelPrice;
	fuelPrice=distance*10;
	cout<<"Fuel needed: "<<fuelPrice<<endl;
}	
#include<iostream>
using namespace std;

void measurement(float inches);

main()
{
	float inches;
	cout<<"Enter the measurement in inches: ";
	cin>>inches;
	measurement(inches);
}

void measurement(float inches)
{
	float feet;
	feet=inches/12;
	cout<<"Equivalent in feet: "<<feet<<endl;
}
#include<iostream>
using namespace std;

void howManyStickers(float sideLength);

main()
{
	cout<<"Enter the side length of the Rubik's Cube: ";
	float sideLength;
	cin>>sideLength;
	howManyStickers(sideLength);
}

void howManyStickers(float sideLength)
{
	float stickers;
	stickers=sideLength*sideLength*6;
	cout<<"Number of stickers needed: "<<stickers<<endl;
}
#include<iostream>
using namespace std;

void addition(int n1, int n2);
void subtraction(int n1, int n2);
void product(int n1, int n2);
void division(int n1, int n2);
 main()
{
	cout<<"Enter 1st number: ";
	float n1;
	cin>>n1;
	cout<<"Enter 2nd number: ";
	float n2;
	cin>>n2;
	cout<<"Enter an operator (+, -, *, /): ";
	char op;
	cin>>op;
	if(op== '+'){
	addition(n1, n2);
}
 	if(op== '-'){
	subtraction(n1, n2);
}
	if(op== '*'){
	product(n1, n2);
}
	if(op== '/'){
	division(n1, n2);
}
	
}

void addition(int n1, int n2)
{
cout<< "Sum: "<<n1+n2;
}

void subtraction(int n1, int n2)
{
cout<< "Subtraction: "<<n1-n2;
}

void product(int n1, int n2)
{
cout<< "Multiplication: "<<n1*n2;
}

void division(int n1, int n2)
{
cout<< "Division: "<<n1/n2;
}
#include<iostream>
using namespace std;

void eligible(int number);
main()
{
	cout<<"Enter your age: ";
	int number;
	cin>>number;

	if(number<18){
	cout<<"You are not eligible to vote.";
}
	if(number>18){
	cout<<"You are eligible to vote.";
}

	if(number==18){
	cout<<"You are eligible to vote.";
}

}
#include<iostream>
using namespace std;
void result(int n1);
main()
{
	cout<<"Enter your score: ";
	int number;
	cin>>number;
	if(number==50){
	cout<<"Fail";
}
	if(number<50){
	cout<<"Fail";
}
	if(number>50){
	cout<<"Pass";
}
}
#include<iostream>
using namespace std;
void qualify(int number);
main()
{
	cout<<"Enter a number: ";
	int number;
	cin>>number;
	if(number/2){
	cout<<"Number "<<number<<" is even";
}
	else{
	cout<<"Number "<<number<<" is odd";
}
}
#include<iostream>
using namespace std;
void payment(string day,float amount);
main()
{
	cout<<"Enter the day of purchase: ";
	string day;
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	float amount;
	cin>>amount;
	if(day=="Sunday"){
	float discount;
	discount=amount*0.1;
	float payableAmount;
	payableAmount=amount-discount;
	cout<<"Payable Amount: $"<<payableAmount;
}
	else{
	cout<<"Payable Amount: "<<amount;
}
}
#include<iostream>
using namespace std;
void fuelCalculations(float number);
main()
{
	cout<<"Enter the distance: ";
	float number;
	cin>>number;
	if(number<10){
	cout<<"Fuel needed: 100";
}
	if(number==10){
	cout<<"Fuel needed: 100";
}
	if(number>10){
	float amount;
	amount=number*10;
	cout<<"Fuel needed: "<<amount;}
}
#include<iostream>
using namespace std;
void name(string n);
main()
{
	cout<<"Enter your name: ";
	string n;
	cin>>n;
	while(true)
{
	cout<<n;
}	
}
#include<iostream>
using namespace std;
void name(string a);
main()
{
	cout<<"Enter your name: ";
	string a;
	cin>>a;
	while(true)
{
	name(a);
}
}
void name(string a)
{
	cout<<a;
	cout<<endl;
}
#include<iostream>
using namespace std;
void payableAmount(string day, int amount);
main()
{
	cout<<"Enter the day of purchasement: ";
	string day;
	cin>>day;
	cout<<"Enter the total amount: ";
	int amount;
	cin>>amount;
	if(day=="Sunday"){
	int discount;
	discount=amount/10;
	float payement;
	payement=amount-discount;
	cout<<"Total payable amount is: "<<payement;
}
	else{
	int discount;
	discount=amount/20;
	float payement;
	payement=amount-discount;
	cout<<"Total payable amount is: "<<payement;
}
}
void payableAmount(string day, int amount)
{
	while(true)
{
payableAmount(day, amount);
cout<<endl;
}
}
#include<iostream>
using namespace std;
void add();
	
main()
{
	add();
	add();
}

void add()
{
	int number1, number2, sum;
	cout<<"Enter First Number: ";
	cin>>number1;
	cout<<"Enter Second Number: ";
	cin>>number2;
	sum=number1+number2;
	cout<<"Sum"<<sum<<endl;
}