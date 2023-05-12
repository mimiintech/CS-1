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
    else if (choice == 'n')
    {
        cout << "Thank you!" << endl;
        return false;
    }
    return 0;
}