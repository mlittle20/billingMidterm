 
#include <iostream>
#include <string> 
#include <iomanip>
#include "billType.h"

using namespace std;

void billType::printBill() const
{
    cout << fixed << showpoint << setprecision(2);

    cout << "Pharmacy Charges: $" << pharmacyCharges << endl;
    cout << "Room Charges:     $" << roomRent << endl;
    cout << "Doctor's Fees:    $" << doctorFee << endl;
    cout << "______________________________ " << endl;
    cout << "Total Charges:    $" << pharmacyCharges + roomRent + doctorFee << endl;

} 

double billType::billingAmount()
{
    return pharmacyCharges + roomRent + doctorFee;
}

void billType::setInfo(string id, double phCharges, double rRent,
                   double docFee)
{
    ID = id;
    pharmacyCharges = phCharges;
    roomRent = rRent;
    doctorFee = docFee;
}

void billType::setID(string id)
{
    ID = id;
}

string billType::getID()
{
    return ID;
}

void billType::setPharmacyCharges(double charges)
{ 
    pharmacyCharges = charges;
}

double billType::getPharmacyCharges()
{
   return pharmacyCharges;
}

void billType::updatePharmacyCharges(double charges)
{
    pharmacyCharges = pharmacyCharges + charges; 
}


void billType::setRoomRent(double charges)
{
    roomRent = charges; 
}

double billType::getRoomRent()
{
     return roomRent;
}

void billType::updateRoomRent(double charges)
{
    roomRent = roomRent + charges;
}


void billType::setDoctorFee(double charges)
{
    doctorFee = charges;
}

double billType::getDoctorFee()
{
    return doctorFee;
}

void billType::updateDoctorFee(double charges)
{
    doctorFee = doctorFee + charges;
}

billType::billType(string id, double phCharges, double rRent,
                   double docFee)
{
    ID = id;
    pharmacyCharges = phCharges;
    roomRent = rRent;
    doctorFee = docFee;
}

