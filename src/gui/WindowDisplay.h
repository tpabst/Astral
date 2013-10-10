#ifndef GUI_WINDOW_DISPLAY_H
#define GUI_WINDOW_DISPLAY_H

#include "logic/IStepper.h"
#include "logic/ILoopStopper.h"
#include <memory>

namespace sf
{
    class RenderWindow;
}

class WindowDisplay final : public IStepper
                          , public ILoopStopper
{
    public:
        WindowDisplay();
        ~WindowDisplay();

        virtual void step(quantity<si::time, double> elapsed) override;
        virtual bool shouldStop() const override;

    private:
        std::unique_ptr<sf::RenderWindow> window_;
};

#endif

