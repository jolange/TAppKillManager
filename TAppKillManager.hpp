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
   /*!
    * Constructor.
    * \param p_app application to be managed (by reference)
    */
   TAppKillManager(TApplication& p_app);
   
   /*!
    * if sender sends signal, the managed TApplication
    * is terminated.
    */
   void KillOnSignal(TQObject* sender, const char* signal);
   
   /*!
    * Slot to be called when window is closed.
    * Terminates application if now window is left.
    */
   void SlotWindowClosed();
private:
   TApplication& m_app;   // reference to application

ClassDef(TAppKillManager, 1)
};

#endif // TAPPKILLMANAGER_HPP_
