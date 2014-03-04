#ifndef TAPPKILLMANAGER_HPP_
#define TAPPKILLMANAGER_HPP_

// ROOT
#include <TQObject.h>
#include <TApplication.h>

/*!
 * Manages Termination of your ROOT TApplication.
 * Kills the Application on closing of the last
 * window.
 */
class TAppKillManager : public TQObject
{
public:
   TAppKillManager(TApplication& p_app);
   void SlotWindowClosed();
private:
   TApplication& m_app;

ClassDef(TAppKillManager, 1)
};

#endif // TAPPKILLMANAGER_HPP_
