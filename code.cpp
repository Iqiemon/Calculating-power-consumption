#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <math.h>
#include <vector>
#include <sstream>
//power == watts
//voltage == volts
//current == amperes
//calcPower == p = vi
//calcResistance == voltage / current
//voltage / current = resistance
//Voltage (V) = Current (I) * Resistance (R)
//Power (P) = Voltage (V) * Current (I)
//I=VR I = V R


using namespace std;

float totalDailyEnergyF, totalAnnualEnergyF, totalCostF; //declare variable for total all
ofstream MyFile("result.txt"); //create file and open

float calcPower(float voltage, float current){ //func calcPower
	float power = voltage*current;
	return power;
}

float calcResistance(float voltage, float current){ //func calcResist
	float resistance = voltage/current;
	return resistance;
}

void summary(float totalDailyEnergyF, float totalAnnualEnergyF, float totalCostF){ //summary func
	cout<<"ELECTRICITY USAGE"<<endl;
	cout<<"Total Daily Energy: ";
	cout<<totalDailyEnergyF<<" kWh"<<endl;
	cout<<"Total Annual Energy: ";
	cout<<totalAnnualEnergyF<<" kWh"<<endl;
	cout<<"Total Annual Costs: ";
	cout<<"RM"<<totalCostF<<endl;
	stringstream ss1;
	stringstream ss2;
	stringstream ss3;
	ss1 << round(totalDailyEnergyF);
	ss2 << round(totalAnnualEnergyF);
	ss3 << round(totalCostF);
	string s1 = ss1.str();
	string s2 = ss2.str();
	string s3 = ss3.str();
	
	string argument[7] = {"ELECTRICITY USAGE", "Total Daily Energy: ", s1+" kWh", "Total Annual Energy: ", s2+ " kWh", "Total Annual Costs: ", "RM "+s3 }; //array for print out to text
	
	for (int i = 0; i<=6;i++){ //loop for print array to text
		MyFile << argument[i] <<endl;
	}
  	MyFile.close();
}

struct table{
	float voltage ;
}Kettle, Heater, Iron, PlasmaTV, Aircond, Oven;



int main(){
	
	float current[6] = {13.6,5.5,11.4,6.5,18.2,15.7}; //current table 
	Kettle.voltage = 90;
	Heater.voltage = 110;
	Iron.voltage = 220;
	PlasmaTV.voltage = 75;
	Aircond.voltage = 245;
	Oven.voltage = 220;
	string a1 = "Kettle";
	string a2 = "Heater";
	string a3 = "Iron";
	string a4 = "PlasmaTV";
	string a5 = "Aircond";
	string a6 = "Oven";
	int count;
	cout<<"Enter how many times you want to loop:";
	cin>>count;
	for (int i = 1; i<=count; i++){
		float totalDailyEnergy, totalAnnualEnergy, totalCost, tdec, hoursofuseperday;
		string name;
		int  numberofdaysusedperyear;
		cout<<"Enter name of appliance:";
		cin>>name;
		cout<<"Enter hours of use per day:";
		cin>>hoursofuseperday;
		cout<<"Enter number of days used per year:";
		cin>>numberofdaysusedperyear;
		if(name == a1){
			cout<<"Appliance: "+name<<endl;
			cout<<"Voltage: ";
			cout<<Kettle.voltage<<" volts"<<endl;
			cout<<"Current: ";
			cout<<current[0]<<" amperes"<<endl;
			cout<<"Power consumed: "<<calcPower(Kettle.voltage,current[0])<<" watts"<<endl;
			cout<<"Resistance: "<<calcResistance(Kettle.voltage,current[0])<<" ohms"<<endl;
			totalDailyEnergy = calcPower(Kettle.voltage,current[0])*hoursofuseperday;
			totalAnnualEnergy = totalDailyEnergy*numberofdaysusedperyear;
			totalCost = totalAnnualEnergy*0.21;
			cout<<"Daily energy: ";
			cout<<totalDailyEnergy<<" kWh"<<endl;
			cout<<"Annual energy: ";
			cout<<totalAnnualEnergy<<" kWh"<<endl;
			cout<<"Annual cost: "<<"RM";
			cout<<totalCost<<endl<<endl;
			totalDailyEnergyF = totalDailyEnergyF + totalDailyEnergy;
			totalAnnualEnergyF = totalAnnualEnergyF + totalAnnualEnergy;
			totalCostF = totalCostF + totalCost;
			
			stringstream ssd1;
			stringstream ssd2;
			stringstream ssd3;
			stringstream ssd4;
			stringstream ssd5;
			ssd1 << name;
			ssd2 << round(Kettle.voltage);
			ssd3 << current[0];
			ssd4 << round(calcPower(Kettle.voltage,current[0]));
			ssd5 << round(totalCost);
			string sd1 = ssd1.str();
			string sd2 = ssd2.str();
			string sd3 = ssd3.str();
			string sd4 = ssd4.str();
			string sd5 = ssd5.str();
	
			string argument[11] = {"Appliance: ", sd1,  "Voltage: ", sd2+" volts", "Current: ", sd3+ " amperes", "Power consumed: ", sd4+ " watts", "Annual cost: ", "RM ", sd5 };
	
			for (int i = 0; i<=10;i++){
				MyFile << argument[i];
				if(i == 1 or i == 3 or i == 5 or i == 7){
					MyFile << endl;
				}
			}
			MyFile <<endl<<endl;
		}
		else if(name == a2){
			cout<<"Appliance: "+name<<endl;
			cout<<"Voltage: ";
			cout<<Heater.voltage<<" volts"<<endl;
			cout<<"Current: ";
			cout<<current[1]<<" amperes"<<endl;
			cout<<"Power consumed: "<<calcPower(Heater.voltage,current[1])<<" watts"<<endl;
			cout<<"Resistance: "<<calcResistance(Heater.voltage,current[1])<<" ohms"<<endl;
			tdec = calcPower(Heater.voltage,current[1]);
			totalDailyEnergy = tdec*hoursofuseperday;
			totalAnnualEnergy = totalDailyEnergy*numberofdaysusedperyear;
			totalCost = totalAnnualEnergy*0.21;
			cout<<"Daily energy: ";
			cout<<totalDailyEnergy<<" kWh"<<endl;
			cout<<"Annual energy: ";
			cout<<totalAnnualEnergy<<" kWh"<<endl;
			cout<<"Annual cost: "<<"RM";
			cout<<totalCost<<endl<<endl;
			totalDailyEnergyF = totalDailyEnergyF + totalDailyEnergy;
			totalAnnualEnergyF = totalAnnualEnergyF + totalAnnualEnergy;
			totalCostF = totalCostF + totalCost;
			
			stringstream ssd1;
			stringstream ssd2;
			stringstream ssd3;
			stringstream ssd4;
			stringstream ssd5;
			ssd1 << name;
			ssd2 << round(Heater.voltage);
			ssd3 << current[1];
			ssd4 << calcPower(Heater.voltage,current[1]);
			ssd5 << round(totalCost);
			string sd1 = ssd1.str();
			string sd2 = ssd2.str();
			string sd3 = ssd3.str();
			string sd4 = ssd4.str();
			string sd5 = ssd5.str();
			string argument[11] = {"Appliance: ", sd1,  "Voltage: ", sd2+" volts", "Current: ", sd3+ " amperes", "Power consumed: ", sd4+ " watts", "Annual cost: ", "RM ", sd5 };
			for (int i = 0; i<=10;i++){
				MyFile << argument[i];
				if(i == 1 or i == 3 or i == 5 or i == 7){
					MyFile << endl;
				}
			}
			MyFile <<endl<<endl;
		}
		else if(name == a3){
			cout<<"Appliance: "+name<<endl;
			cout<<"Voltage: ";
			cout<<Iron.voltage<<" volts"<<endl;
			cout<<"Current: ";
			cout<<current[2]<<" amperes"<<endl;
			cout<<"Power consumed: "<<calcPower(Iron.voltage,current[2])<<" watts"<<endl;
			cout<<"Resistance: "<<calcResistance(Iron.voltage,current[2])<<" ohms"<<endl;
			tdec = calcPower(Iron.voltage,current[2]);
			totalDailyEnergy = tdec*hoursofuseperday;
			totalAnnualEnergy = totalDailyEnergy*numberofdaysusedperyear;
			totalCost = totalAnnualEnergy*0.21;
			cout<<"Daily energy: ";
			cout<<totalDailyEnergy<<" kWh"<<endl;
			cout<<"Annual energy: ";
			cout<<totalAnnualEnergy<<" kWh"<<endl;
			cout<<"Annual cost: "<<"RM";
			cout<<totalCost<<endl<<endl;
			totalDailyEnergyF = totalDailyEnergyF + totalDailyEnergy;
			totalAnnualEnergyF = totalAnnualEnergyF + totalAnnualEnergy;
			totalCostF = totalCostF + totalCost;
			
			stringstream ssd1;
			stringstream ssd2;
			stringstream ssd3;
			stringstream ssd4;
			stringstream ssd5;
			ssd1 << name;
			ssd2 << round(Iron.voltage);
			ssd3 << current[2];
			ssd4 << round(calcPower(Iron.voltage,current[2]));
			ssd5 << round(totalCost);
			string sd1 = ssd1.str();
			string sd2 = ssd2.str();
			string sd3 = ssd3.str();
			string sd4 = ssd4.str();
			string sd5 = ssd5.str();
			string argument[11] = {"Appliance: ", sd1,  "Voltage: ", sd2+" volts", "Current: ", sd3+ " amperes", "Power consumed: ", sd4+ " watts", "Annual cost: ", "RM ", sd5 };
			for (int i = 0; i<=10;i++){
				MyFile << argument[i];
				if(i == 1 or i == 3 or i == 5 or i == 7){
					MyFile << endl;
				}
			}
			MyFile <<endl<<endl;
		}
		else if(name == a4){
			cout<<"Appliance: "+name<<endl;
			cout<<"Voltage: ";
			cout<<PlasmaTV.voltage<<" volts"<<endl;
			cout<<"Current: ";
			cout<<current[3]<<" amperes"<<endl;
			cout<<"Power consumed: "<<calcPower(PlasmaTV.voltage,current[3])<<" watts"<<endl;
			cout<<"Resistance: "<<calcResistance(PlasmaTV.voltage,current[3])<<" ohms"<<endl;
			tdec = calcPower(PlasmaTV.voltage,current[3]);
			totalDailyEnergy = tdec*hoursofuseperday;
			totalAnnualEnergy = totalDailyEnergy*numberofdaysusedperyear;
			totalCost = totalAnnualEnergy*0.21;
			cout<<"Daily energy: ";
			cout<<totalDailyEnergy<<" kWh"<<endl;
			cout<<"Annual energy: ";
			cout<<totalAnnualEnergy<<" kWh"<<endl;
			cout<<"Annual cost: "<<"RM";
			cout<<totalCost<<endl<<endl;
			totalDailyEnergyF = totalDailyEnergyF + totalDailyEnergy;
			totalAnnualEnergyF = totalAnnualEnergyF + totalAnnualEnergy;
			totalCostF = totalCostF + totalCost;
			
			stringstream ssd1;
			stringstream ssd2;
			stringstream ssd3;
			stringstream ssd4;
			stringstream ssd5;
			ssd1 << name;
			ssd2 << round(PlasmaTV.voltage);
			ssd3 << current[3];
			ssd4 << round(calcPower(PlasmaTV.voltage,current[3]));
			ssd5 << round(totalCost);
			string sd1 = ssd1.str();
			string sd2 = ssd2.str();
			string sd3 = ssd3.str();
			string sd4 = ssd4.str();
			string sd5 = ssd5.str();
			string argument[11] = {"Appliance: ", sd1,  "Voltage: ", sd2+" volts", "Current: ", sd3+ " amperes", "Power consumed: ", sd4+ " watts", "Annual cost: ", "RM ", sd5 };
			for (int i = 0; i<=10;i++){
				MyFile << argument[i];
				if(i == 1 or i == 3 or i == 5 or i == 7){
					MyFile << endl;
				}
			}
			MyFile <<endl<<endl;
		}
		else if(name == a5){
			cout<<"Appliance: "+name<<endl;
			cout<<"Voltage: ";
			cout<<Aircond.voltage<<" volts"<<endl;
			cout<<"Current: ";
			cout<<current[4]<<" amperes"<<endl;
			cout<<"Power consumed: "<<calcPower(Aircond.voltage,current[4])<<" watts"<<endl;
			cout<<"Resistance: "<<calcResistance(Aircond.voltage,current[4])<<" ohms"<<endl;
			tdec = calcPower(Aircond.voltage,current[4]);
			totalDailyEnergy = tdec*hoursofuseperday;
			totalAnnualEnergy = totalDailyEnergy*numberofdaysusedperyear;
			totalCost = totalAnnualEnergy*0.21;
			cout<<"Daily energy: ";
			cout<<totalDailyEnergy<<" kWh"<<endl;
			cout<<"Annual energy: ";
			cout<<totalAnnualEnergy<<" kWh"<<endl;
			cout<<"Annual cost: "<<"RM";
			cout<<totalCost<<endl<<endl;
			totalDailyEnergyF = totalDailyEnergyF + totalDailyEnergy;
			totalAnnualEnergyF = totalAnnualEnergyF + totalAnnualEnergy;
			totalCostF = totalCostF + totalCost;
			
			stringstream ssd1;
			stringstream ssd2;
			stringstream ssd3;
			stringstream ssd4;
			stringstream ssd5;
			ssd1 << name;
			ssd2 << round(Aircond.voltage);
			ssd3 << current[4];
			ssd4 << round(calcPower(Aircond.voltage,current[4]));
			ssd5 << round(totalCost);
			string sd1 = ssd1.str();
			string sd2 = ssd2.str();
			string sd3 = ssd3.str();
			string sd4 = ssd4.str();
			string sd5 = ssd5.str();
			string argument[11] = {"Appliance: ", sd1,  "Voltage: ", sd2+" volts", "Current: ", sd3+ " amperes", "Power consumed: ", sd4+ " watts", "Annual cost: ", "RM ", sd5 };
			for (int i = 0; i<=10;i++){
				MyFile << argument[i];
				if(i == 1 or i == 3 or i == 5 or i == 7){
					MyFile << endl;
				}
			}
			MyFile <<endl<<endl;
		}
		else if(name == a6){
			cout<<"Appliance: "+name<<endl;
			cout<<"Voltage: ";
			cout<<Oven.voltage<<" volts"<<endl;
			cout<<"Current: ";
			cout<<current[5]<<" amperes"<<endl;
			cout<<"Power consumed: "<<calcPower(Oven.voltage,current[5])<<" watts"<<endl;
			cout<<"Resistance: "<<calcResistance(Oven.voltage,current[5])<<" ohms"<<endl;
			tdec = calcPower(Oven.voltage,current[5]);
			totalDailyEnergy = tdec*hoursofuseperday;
			totalAnnualEnergy = totalDailyEnergy*numberofdaysusedperyear;
			totalCost = totalAnnualEnergy*0.21;
			cout<<"Daily energy: ";
			cout<<totalDailyEnergy<<" kWh"<<endl;
			cout<<"Annual energy: ";
			cout<<totalAnnualEnergy<<" kWh"<<endl;
			cout<<"Annual cost: "<<"RM";
			cout<<totalCost<<endl<<endl;
			totalDailyEnergyF = totalDailyEnergyF + totalDailyEnergy;
			totalAnnualEnergyF = totalAnnualEnergyF + totalAnnualEnergy;
			totalCostF = totalCostF + totalCost;
			
			stringstream ssd1;
			stringstream ssd2;
			stringstream ssd3;
			stringstream ssd4;
			stringstream ssd5;
			ssd1 << name;
			ssd2 << round(Oven.voltage);
			ssd3 << current[5];
			ssd4 << round(calcPower(Oven.voltage,current[5]));
			ssd5 << round(totalCost);
			string sd1 = ssd1.str();
			string sd2 = ssd2.str();
			string sd3 = ssd3.str();
			string sd4 = ssd4.str();
			string sd5 = ssd5.str();
			string argument[11] = {"Appliance: ", sd1,  "Voltage: ", sd2+" volts", "Current: ", sd3+ " amperes", "Power consumed: ", sd4+ " watts", "Annual cost: ", "RM ", sd5 };
			for (int i = 0; i<=10;i++){
				MyFile << argument[i];
				if(i == 1 or i == 3 or i == 5 or i == 7){
					MyFile << endl;
				}
			}
			MyFile <<endl<<endl;
		}
		
	}
	summary(totalDailyEnergyF, totalAnnualEnergyF, totalCostF);
	
}


