/* EG-110
 * SNHU, CETA
 */

class Drivetrain
{
private:
    int starboardPWMPin;
    int portPWMPin;

public:
    Drivetrain(int _starboardPWMPin, int _portPWMPin);

    void begin();
    void setChassisVector(signed int speed, signed int rot) const;
    void setChassisOverride(signed int speed, signed int rot) const;
};