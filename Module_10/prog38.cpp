#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib> // exit function prototype
#include "ClientData.h" // ClientData class definition
using namespace std;

void outputLine( ostream&, const ClientData & ); // prototype
int main()
{
   // Q2: Creates file
   createFile();

   //Q2: Reads file sequentially
   readSequentially();

   int option;
   ifstream inCredit( "credit.dat", ios::in | ios::binary );

   // exit program if ifstream cannot open file
   if ( !inCredit )
   {
      cerr << "File could not be opened." << endl;
      exit( EXIT_FAILURE );
   } // end if

   // output column heads

   ClientData client; // create record
   int r;

/*    cout << "Enter record to read ";
   cin >> r; */
   //TODO : Ask  three options as first record, last record or the record number
   // Read the record based on the user value
   cout << "Enter an option:\n\n1: Read First Record\n2: Read Last Record\n3: Read Record Number ";
   cin >> option;

   if(option == 1) {
      inCredit.seekg (0);
      // read first record from file
      inCredit.read( reinterpret_cast< char * >( &client ),
         sizeof( ClientData ) );
      cout << left << setw( 10 ) << "Account" << setw( 16 )
         << "Last Name" << setw( 11 ) << "First Name" << left
         << setw( 10 ) << right << "Balance" << endl;

      outputLine( cout, client );


   } else if(option == 2) {
      inCredit.seekg (sizeof(ClientData)*(r-1), ios::end);
      // read last record from file
      inCredit.read( reinterpret_cast< char * >( &client ),
         sizeof( ClientData ) );
      cout << left << setw( 10 ) << "Account" << setw( 16 )
         << "Last Name" << setw( 11 ) << "First Name" << left
         << setw( 10 ) << right << "Balance" << endl;

      outputLine( cout, client );
   } else if(option == 3) {
      int recordNum;

      cout << "Enter Record Number: " << endl;
      cin >> recordNum;
      
      while ( inCredit && !inCredit.eof() )
      {
         // display record
         if ( client.getAccountNumber() == recordNum ) {

            inCredit.seekg ((client.getAccountNumber() - 1) * sizeof(ClientData), ios::cur);
            // read record from file by record number
            inCredit.read( reinterpret_cast< char * >( &client ),
               sizeof( ClientData ) );
            cout << left << setw( 10 ) << "Account" << setw( 16 )
               << "Last Name" << setw( 11 ) << "First Name" << left
               << setw( 10 ) << right << "Balance" << endl;

            outputLine( cout, client );
         }
      }
   } else {
      cout << "Option not valid";
      return;
   }

}


void outputLine( ostream &output, const ClientData &record )
{
   output << left << setw( 10 ) << record.getAccountNumber()
      << setw( 16 ) << record.getLastName()
      << setw( 11 ) << record.getFirstName()
      << setw( 10 ) << setprecision( 2 ) << right << fixed
      << showpoint << record.getBalance() << endl;
} // end function outputLine

void createFile() {
   ofstream outCredit( "credit.dat", ios::out | ios::binary );

   if(!outCredit) {
      cerr << "File could not be accessed" << endl;
      exit( EXIT_FAILURE );
   }

   int accountNum;
   char lastName[15];
   char firstName[10];
   double balance;
   ClientData client;

   while( accountNum > 0 ) {
      cout << "Enter account number (0 to end input)\n";
      cin >> accountNum;

      cout << "Enter last name, first name, and balance";
      cin >> lastName;
      cin >> firstName;
      cin >> balance;

      client.setAccountNumber( accountNum );
      client.setLastName( lastName );
      client.setFirstName( firstName );
      client.setBalance( balance );

      outCredit.seekp( ( client.getAccountNumber() - 1 ) * sizeof ( ClientData ));
      outCredit.write( reinterpret_cast<const char * >( &client ), sizeof( ClientData ));
   }
}

void readSequentially() { 
   
   ifstream inCredit( "credit.dat", ios::in | ios::binary );

   if(!inCredit) {
      cerr << "File could not be accessed" << endl;
      exit(1);
   }

   cout << left << setw( 10 ) << "Account" << setw( 16 )
   << "Last Name" << setw( 11 ) << "First Name" << left
   << setw( 10 ) << right << "Balance" << endl;

   ClientData client;

   inCredit.read(reinterpret_cast< char * >( &client), sizeof( ClientData ));

   while(inCredit && !inCredit.eof()) {
      if(client.getAccountNumber() != 0)
         outputLine(cout, client);
      
      inCredit.read(reinterpret_cast< char * >( &client), sizeof( ClientData ));
   }
}

