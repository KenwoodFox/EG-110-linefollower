/* EG-110
 * SNHU, CETA
 */

class Operator
{
private:
    int _throttlePin;
    int _steerPin;
    int _autonomousPin;

public:
    Operator(int _throttlePin, int _steerPin, int _autonomousPin);

    bool getManualOverride() const;
    int getThrottle() const;
};
