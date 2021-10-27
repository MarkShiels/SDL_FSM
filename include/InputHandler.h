#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

class InputHandler
{
public:

    InputHandler();
    ~InputHandler(){};


    void handleInput();

private:

    float screenSizeX = 680;
    float screenSizeY = 480;

};

#endif