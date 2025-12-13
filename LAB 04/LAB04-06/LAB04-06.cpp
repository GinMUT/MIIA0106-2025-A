#include <iostream>
#include <string>
using namespace std;

int main() {
    string sensorStatus;

    cout << "=== Line Following Robot System ===" << endl;
    cout << "Instructions: Enter 'left', 'right', or 'center' to simulate sensor." << endl;
    cout << "Enter 'exit' to stop the program." << endl;
    cout << "-----------------------------------" << endl;

    // ใช้ Loop เพื่อจำลองการทำงานต่อเนื่องเหมือนหุ่นยนต์จริง
    while (true) {
        cout << "Sensor detects line at: ";
        cin >> sensorStatus;

        // ตรวจสอบเงื่อนไขตามโจทย์
        if (sensorStatus == "exit") {
            cout << "Stopping the robot..." << endl;
            break; // ออกจาก Loop
        }
        else if (sensorStatus == "left") {
            // 1. ถ้าเส้นสีดำอยู่ทางซ้าย
            cout << ">> Action: Turn LEFT " << endl;
        }
        else if (sensorStatus == "right") {
            // 2. ถ้าเส้นสีดำอยู่ทางขวา
            cout << ">> Action: Turn RIGHT " << endl;
        }
        else if (sensorStatus == "center") {
            // 3. ถ้าเส้นสีดำอยู่กลาง
            cout << ">> Action: Go FORWARD " << endl;
        }
        else {
            cout << ">> Error: Unknown sensor status!" << endl;
        }
        cout << "-----------------------------------" << endl;
    }

    return 0;
}
