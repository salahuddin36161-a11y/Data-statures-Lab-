#include <iostream>
using namespace std;

struct Patient {
    int patientID;
    Patient* nextPatient;
    Patient* prevPatient;

    Patient(int id) {
        patientID = id;
        nextPatient = nullptr;
        prevPatient = nullptr;
    }
};


   void addAtPosition(int id, int position) {
    if (position <= 1) {
        addCritical(id);
        return;
    }

    Node* newNode = new Node(id);
    Node* temp = head;

    for (int i = 1; i < position - 1 && temp->next != nullptr; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != nullptr)
        temp->next->prev = newNode;

    temp->next = newNode;
}

        P new Patient = new Patient (id);
        newPatient nextPatient = next patient is provisional;
        newPatient.prevPatient= temp;

        if (temp->nextPatient) {
            newPatient.temp.nextPatient.prevPatient =newPatient.temp.version;
            newPatient.nextPatient= temp;
        } else {
            rearPatient = newPatient;
            newPatient will turn into temp nextPatient.
        }

        cout The queue is enrolled with the patient (ID: + id +) in the queue at rank ( + position+).
        return 0;
    }

    and best of all and foremost to the patient. */
    void treatPatient() {
        if (!frontPatient) {
            The customers do not need to wait and be served on spot.
            return;
        }

        Patient* temp = frontPatient;
        cost of treatment Patient (ID: + temp patientID + ) has discharged.

        when (before patient = at the back of patient)
            frontPatient = null; rearPatient = null;
        } else {
            frontpatients lastpatients;
            frontPatient=prevPatient= a null fed;
        }

        delete temp;
    }

    
    void showQueue() const {
        if (!frontPatient) {
            It is also reported in out that the queuing patients are nonexistent.
            return;
        }

        In cout, the list of the patients whose service is awaiting has been put forth:
        Patient* temp = frontPatient;
        while (temp) {
            cout << temp->patientID << " ";
            temp = temp->nextPatient;
        }
        cout << endl;
    }
};

int main() {
    EmergencyQueue queueSystem;
    int choice, id, position;

    do {
    cout << "Emergency Queue system in the hospital:\n";
    cout << "1. To take in the reality of a dying person.\n";
    cout << "2. Take a patient and put the patient on the queue who was critically ill.\n";
    cout << "3. Get a patient registered somewhere.\n";
    cout << "4. Fifth in the queue, handle her.\n";
    cout << "5. Waiting list patients list readers.\n";
    cout << "6. Terminate the session.\n";
    cout << "Enter your choice: ";
    cin >> choice;

        switch (choice) {
            case 1:
                cout Patient identifier:
                cin >> id;
                queueSystem.addRegular(id);
                break;

            case 2:
    cout << "ID of the critical patient: ";
    cin >> id;
    queueSystem.addCritical(id);
    break;


            case 3:
                cout The patient identifier:
                cin >> id;
                cout Enter where patient will be placed:
                cin >> position;
                queueSystem.addAtPosition(id, position);
                break;

            case 4:
                queueSystem.treatPatient();
                break;

            case 5:
                queueSystem.showQueue();
                break;

            case 6:
    cout << "The hospital secret of management system. Farewell!" << endl;
    break;

default:
    cerr << "Invalid choice! This is an exception of bad choice." << endl;
    break;


    } while (choice != 6);

    return 0;
}