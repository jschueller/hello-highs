
#include <iostream>

#if 0
struct _HighsCallbackDataOut;
struct _HighsCallbackDataIn;
typedef _HighsCallbackDataOut HighsCallbackDataOut;
typedef _HighsCallbackDataIn HighsCallbackDataIn;
#else
struct HighsCallbackDataOut;
struct HighsCallbackDataIn;
#endif


class Solver
{
public:
  Solver() {};
  void run() {};

protected:
  static void Callback(const int callback_type,
                       const char* message,
                       const HighsCallbackDataOut* data_out,
                       HighsCallbackDataIn* data_in,
                       void* user_callback_data);
};

