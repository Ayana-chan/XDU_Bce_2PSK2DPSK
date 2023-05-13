/* Include files */

#include "commgraycode_cgxe.h"
#include "m_mjL3UKLNYALOGRxG37ef3C.h"

unsigned int cgxe_commgraycode_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 124740094 &&
      ssGetChecksum1(S) == 1368254182 &&
      ssGetChecksum2(S) == 390023845 &&
      ssGetChecksum3(S) == 2415129692) {
    method_dispatcher_mjL3UKLNYALOGRxG37ef3C(S, method, data);
    return 1;
  }

  return 0;
}
