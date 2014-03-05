// ROOT
#include <TGFrame.h>
#include <THashList.h>

#include "TAppKillManager.hpp"

TAppKillManager::TAppKillManager(TApplication& p_app):
   TQObject(),
   m_app(p_app)
{
   // Connections
   TQObject::Connect("TGMainFrame",           "CloseWindow()",
                     "TAppKillManager", this, "SlotWindowClosed()");
}

void TAppKillManager::SlotWindowClosed()
{
   TIter next(gClient->GetListOfWindows());
   TObject *o;
   Int_t iMainFrames = 0;
   // count frames
   while (o=next()) {
      if (o->InheritsFrom(TGMainFrame::Class()))
         iMainFrames++;
   }
   // if none left: kill Application
   if (iMainFrames <= 1) {
      m_app.Terminate();
   }
}
