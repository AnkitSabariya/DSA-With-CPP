#include <iostream>
using namespace std;
int i = 0;
// Create
void create(int box[])
{
    cout << "--------------------------------" << endl;

    cout << "Enter array value  " << "[" << i << "] : ";
    cin >> box[i];
    i++;
    cout << "---------------------------------Created Successfully----------------------------------------" << endl;
}
// Read
void read(int box[])
{
    cout << "--------------------------------" << endl;

    for (int j = 0; j < i; j++)
    {
        cout << "Read The Array [" << j << "] : " << box[j] << " " << endl;
    }
    cout << endl;
    cout << "---------------------------------Read Successfully----------------------------------------" << endl;
}
// update
void update(int box[])
{
    int replace, j;
    cout << "--------------------------------" << endl;
    cout << "Select index no 0 to " << i - 1 << " : ";
    cin >> j;

    if (j >= 0 && j < i)
    {

        cout << "Update the value of index [" << j << "] : ";
        cin >> replace;
        box[j] = replace;
    }
    else
    {
        cout << "!! Invalid Index !!  " << j << endl;
        cout << "Please Select 0 to " << i - 1 << endl;
    }
    cout << endl;
    cout << "---------------------------------Update Successfully----------------------------------------" << endl;
}
// Delate
void delate(int box[])
{
    int delate;

    cout << "--------------------------------" << endl;
    cout << "Select index no For delate 0 to " << i - 1 << " : ";
    cin >> delate;
    if (delate < 0 || delate >= i)
    {

        cout << "!! Invalid Index !!  " << endl;
    }

    for (int j = delate; j < i; j++)
    {

        box[j] = box[j + 1];
    }
    i--;

    cout << endl;
    cout << "---------------------------------Delate Successfully----------------------------------------" << endl;
}

int main()
{
    int user;
    int box[100];

    do
    {
        cout << "Press 1 For Create : " << endl;
        cout << "Press 2 For Read : " << endl;
        cout << "Press 3 For Update : " << endl;
        cout << "Press 4 For Delate : " << endl;
        cout << "Press 5 For Exit : " << endl;
        cout << "Enter Your Choice : ";
        cin >> user;
        switch (user)
        {
            // Create
        case 1:
            create(box);
            break;
            // Read
        case 2:
            read(box);

            break;
            // Update
        case 3:
            update(box);
            break;
        // Delate
        case 4:
            delate(box);
            break;

        default:
            cout << "Exit " << endl;
            break;
        }

    } while (user != 0);
}