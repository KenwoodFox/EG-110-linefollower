/* EG-110
 * SNHU, CETA
 */

class Operator
{
private:
    int throttlePin;
    int steerPin;
    int autonomousPin;
    int recvMin;
    int recvMax;

public:
    Operator(int _throttlePin, int _steerPin, int _autonomousPin, int _recvMin = 1100, int _recvMax = 1800);

    bool getManualOverride() const;
    int getThrottle() const;
    int getSteer() const;
};
