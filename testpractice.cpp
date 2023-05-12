bool anotherTransaction()
{
     bool question = true;
     while (question)
     {
          char choice = '\0';
          cout << "Would you like another transaction? (y/n)" << endl;
          cin >> choice;
          if (choice == 'y')
          {
               return true;
          }
          if (choice == 'n')
          {
               cout << "Thank you!" << endl;
               return false;
          }
     }
     return false;
}