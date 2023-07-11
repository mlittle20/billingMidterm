 
#include <iostream>
#include <string>
#include <iomanip>
#include "patientType.h"
 
using namespace std;

void patientType::print() const
{
    cout << "Patient: ";
    personType::print();
    cout << endl;

    cout << "Attending Physician: ";
    attendingPhysicain.print();
    cout  << endl;
     
    cout << "Admit Date: ";
    admitDate.printDate();
    cout << endl;
    cout << "Discharge Date: "; 
    dischargeDate.printDate();
    cout << endl << endl;
}

void patientType::setInfo(string id, string fName, string lName, 
                         int bDay, int bMth, int bYear,
                         string docFrName,
                         string docLaName, string docSpl,
                         int admDay, int admMth, int admYear,
                         int disChDay, int disChMth, int disChYear)
{
    ID = id;
    setName(fName, lName);
    dateOfBirth.setDate(bDay, bMth, bYear);
    attendingPhysicain.setName(docFrName, docLaName);
    attendingPhysicain.setSpeciality(docSpl);
    admitDate.setDate(admDay, admMth, admYear);
    dischargeDate.setDate(disChDay, disChMth, disChYear);
}


void patientType::setID(string id)
{
    ID = id;
}

string patientType::getID()
{
    return ID;
}

void patientType::setBirthDate(int bDay, int bMth, int bYear)
{
    dateOfBirth.setDate(bDay, bMth, bYear);
}

int patientType::getBirthDay()
{
    return dateOfBirth.getDay();
}

int patientType::getBirthMonth()
{
    return dateOfBirth.getMonth();
}

int patientType::getBirthYear()
{
    return dateOfBirth.getYear();
}

void patientType::setDoctorName(string fName, string lName)
{
    attendingPhysicain.setName(fName, lName);
}
    
void patientType::setDoctorSpl(string spl)
{
    attendingPhysicain.setSpeciality(spl);
}
  
string patientType::getDoctorFName()
{
    return attendingPhysicain.getFirstName();
}

string patientType::getDoctorLName()
{
    return attendingPhysicain.getLastName();
}

string patientType::getDoctorSpl()
{
    return attendingPhysicain.getSpeciality();
}

void patientType::setAdmDate(int admDay, int admMth, int admYear)
{
    admitDate.setDate(admDay, admMth, admYear);
}

int patientType::getAdmDay()
{
    return admitDate.getDay();
}

int patientType::getAdmMonth()
{
    return admitDate.getMonth();
}

int patientType::getAdmYear()
{
    return admitDate.getYear();
}

void patientType::setDisDate(int disDay, int disMth, int disYear)
{
    dischargeDate.setDate(disDay, disMth, disYear);
}

int patientType::getDisDay()
{
    return dischargeDate.getDay();
}

int patientType::getDisMonth()
{
    return dischargeDate.getMonth();
}

int patientType::getDisYear()
{
    return dischargeDate.getYear();
}

patientType::patientType(string id, string fName, string lName, 
                         int bDay, int bMth, int bYear,
                         string docFrName, string docLaName, string docSpl,
                         int admDay, int admMth, int admYear,
                         int disChDay, int disChMth, int disChYear)
                   : personType(fName, lName), 
                     dateOfBirth(bDay, bMth, bYear),
                     attendingPhysicain(docFrName, docLaName, docSpl), 
                     admitDate(admDay, admMth, admYear), 
                     dischargeDate(disChDay, disChMth, disChYear)
{
    ID = id;
}
