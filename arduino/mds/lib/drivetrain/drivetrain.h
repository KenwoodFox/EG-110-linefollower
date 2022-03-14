/* EG-110
 * SNHU, CETA
 */

class Drivetrain
{
private:
    int StarboardPWMPin;
    int PortPWMPin;

public:
    Drivetrain(int _StarboardPWMPin, int _PortPWMPin);

    void setChassisVector(signed int speed, signed int rot);
};