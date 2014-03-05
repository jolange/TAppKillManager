// ROOT
#include <TCanvas.h>
#include <TApplication.h>

// use the TAppKillManager
#include "TAppKillManager.hpp"

/*!
 * Example analysis routine.
 * Simply opens a TCanvas.
 * Put your analysis here
 */
void analysis()
{
   // your analysis here...
   TCanvas* can = new TCanvas("can","Example");
}

/*!
 * Example main routine.
 * Normally no need to change something here
 * if you put your analysis in analysis().
 */
int main(int argc, char* argv[])
{
   TApplication app("Example", &argc, argv);
   TAppKillManager killer(app);
   analysis();
   app.Run();
   return 0;
}
