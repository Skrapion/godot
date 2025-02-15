// This file is generated. Do not edit!
// see https://github.com/hpvb/dynload-wrapper for details
// generated by ./generate-wrapper.py 0.3 on 2022-12-02 12:55:12
// flags: ./generate-wrapper.py --include /usr/include/X11/extensions/Xrandr.h --sys-include <X11/extensions/Xrandr.h> --soname libXrandr.so.2 --init-name xrandr --output-header xrandr-so_wrap.h --output-implementation xrandr-so_wrap.c
//
// NOTE: Generated from Xrandr 1.5.2.
// This has been handpatched to workaround some issues with the generator that
// will be eventually fixed. In this case, non-existant symbols inherited from
// libX11 and libXrender, but absent in libXrandr.so.2, were removed.
#include <stdint.h>

#define XRRQueryExtension XRRQueryExtension_dylibloader_orig_xrandr
#define XRRQueryVersion XRRQueryVersion_dylibloader_orig_xrandr
#define XRRGetScreenInfo XRRGetScreenInfo_dylibloader_orig_xrandr
#define XRRFreeScreenConfigInfo XRRFreeScreenConfigInfo_dylibloader_orig_xrandr
#define XRRSetScreenConfig XRRSetScreenConfig_dylibloader_orig_xrandr
#define XRRSetScreenConfigAndRate XRRSetScreenConfigAndRate_dylibloader_orig_xrandr
#define XRRConfigRotations XRRConfigRotations_dylibloader_orig_xrandr
#define XRRConfigTimes XRRConfigTimes_dylibloader_orig_xrandr
#define XRRConfigSizes XRRConfigSizes_dylibloader_orig_xrandr
#define XRRConfigRates XRRConfigRates_dylibloader_orig_xrandr
#define XRRConfigCurrentConfiguration XRRConfigCurrentConfiguration_dylibloader_orig_xrandr
#define XRRConfigCurrentRate XRRConfigCurrentRate_dylibloader_orig_xrandr
#define XRRRootToScreen XRRRootToScreen_dylibloader_orig_xrandr
#define XRRSelectInput XRRSelectInput_dylibloader_orig_xrandr
#define XRRRotations XRRRotations_dylibloader_orig_xrandr
#define XRRSizes XRRSizes_dylibloader_orig_xrandr
#define XRRRates XRRRates_dylibloader_orig_xrandr
#define XRRTimes XRRTimes_dylibloader_orig_xrandr
#define XRRGetScreenSizeRange XRRGetScreenSizeRange_dylibloader_orig_xrandr
#define XRRSetScreenSize XRRSetScreenSize_dylibloader_orig_xrandr
#define XRRGetScreenResources XRRGetScreenResources_dylibloader_orig_xrandr
#define XRRFreeScreenResources XRRFreeScreenResources_dylibloader_orig_xrandr
#define XRRGetOutputInfo XRRGetOutputInfo_dylibloader_orig_xrandr
#define XRRFreeOutputInfo XRRFreeOutputInfo_dylibloader_orig_xrandr
#define XRRListOutputProperties XRRListOutputProperties_dylibloader_orig_xrandr
#define XRRQueryOutputProperty XRRQueryOutputProperty_dylibloader_orig_xrandr
#define XRRConfigureOutputProperty XRRConfigureOutputProperty_dylibloader_orig_xrandr
#define XRRChangeOutputProperty XRRChangeOutputProperty_dylibloader_orig_xrandr
#define XRRDeleteOutputProperty XRRDeleteOutputProperty_dylibloader_orig_xrandr
#define XRRGetOutputProperty XRRGetOutputProperty_dylibloader_orig_xrandr
#define XRRAllocModeInfo XRRAllocModeInfo_dylibloader_orig_xrandr
#define XRRCreateMode XRRCreateMode_dylibloader_orig_xrandr
#define XRRDestroyMode XRRDestroyMode_dylibloader_orig_xrandr
#define XRRAddOutputMode XRRAddOutputMode_dylibloader_orig_xrandr
#define XRRDeleteOutputMode XRRDeleteOutputMode_dylibloader_orig_xrandr
#define XRRFreeModeInfo XRRFreeModeInfo_dylibloader_orig_xrandr
#define XRRGetCrtcInfo XRRGetCrtcInfo_dylibloader_orig_xrandr
#define XRRFreeCrtcInfo XRRFreeCrtcInfo_dylibloader_orig_xrandr
#define XRRSetCrtcConfig XRRSetCrtcConfig_dylibloader_orig_xrandr
#define XRRGetCrtcGammaSize XRRGetCrtcGammaSize_dylibloader_orig_xrandr
#define XRRGetCrtcGamma XRRGetCrtcGamma_dylibloader_orig_xrandr
#define XRRAllocGamma XRRAllocGamma_dylibloader_orig_xrandr
#define XRRSetCrtcGamma XRRSetCrtcGamma_dylibloader_orig_xrandr
#define XRRFreeGamma XRRFreeGamma_dylibloader_orig_xrandr
#define XRRGetScreenResourcesCurrent XRRGetScreenResourcesCurrent_dylibloader_orig_xrandr
#define XRRSetCrtcTransform XRRSetCrtcTransform_dylibloader_orig_xrandr
#define XRRGetCrtcTransform XRRGetCrtcTransform_dylibloader_orig_xrandr
#define XRRUpdateConfiguration XRRUpdateConfiguration_dylibloader_orig_xrandr
#define XRRGetPanning XRRGetPanning_dylibloader_orig_xrandr
#define XRRFreePanning XRRFreePanning_dylibloader_orig_xrandr
#define XRRSetPanning XRRSetPanning_dylibloader_orig_xrandr
#define XRRSetOutputPrimary XRRSetOutputPrimary_dylibloader_orig_xrandr
#define XRRGetOutputPrimary XRRGetOutputPrimary_dylibloader_orig_xrandr
#define XRRGetProviderResources XRRGetProviderResources_dylibloader_orig_xrandr
#define XRRFreeProviderResources XRRFreeProviderResources_dylibloader_orig_xrandr
#define XRRGetProviderInfo XRRGetProviderInfo_dylibloader_orig_xrandr
#define XRRFreeProviderInfo XRRFreeProviderInfo_dylibloader_orig_xrandr
#define XRRSetProviderOutputSource XRRSetProviderOutputSource_dylibloader_orig_xrandr
#define XRRSetProviderOffloadSink XRRSetProviderOffloadSink_dylibloader_orig_xrandr
#define XRRListProviderProperties XRRListProviderProperties_dylibloader_orig_xrandr
#define XRRQueryProviderProperty XRRQueryProviderProperty_dylibloader_orig_xrandr
#define XRRConfigureProviderProperty XRRConfigureProviderProperty_dylibloader_orig_xrandr
#define XRRChangeProviderProperty XRRChangeProviderProperty_dylibloader_orig_xrandr
#define XRRDeleteProviderProperty XRRDeleteProviderProperty_dylibloader_orig_xrandr
#define XRRGetProviderProperty XRRGetProviderProperty_dylibloader_orig_xrandr
#define XRRAllocateMonitor XRRAllocateMonitor_dylibloader_orig_xrandr
#define XRRGetMonitors XRRGetMonitors_dylibloader_orig_xrandr
#define XRRSetMonitor XRRSetMonitor_dylibloader_orig_xrandr
#define XRRDeleteMonitor XRRDeleteMonitor_dylibloader_orig_xrandr
#define XRRFreeMonitors XRRFreeMonitors_dylibloader_orig_xrandr
#include <X11/extensions/Xrandr.h>
#undef XRRQueryExtension
#undef XRRQueryVersion
#undef XRRGetScreenInfo
#undef XRRFreeScreenConfigInfo
#undef XRRSetScreenConfig
#undef XRRSetScreenConfigAndRate
#undef XRRConfigRotations
#undef XRRConfigTimes
#undef XRRConfigSizes
#undef XRRConfigRates
#undef XRRConfigCurrentConfiguration
#undef XRRConfigCurrentRate
#undef XRRRootToScreen
#undef XRRSelectInput
#undef XRRRotations
#undef XRRSizes
#undef XRRRates
#undef XRRTimes
#undef XRRGetScreenSizeRange
#undef XRRSetScreenSize
#undef XRRGetScreenResources
#undef XRRFreeScreenResources
#undef XRRGetOutputInfo
#undef XRRFreeOutputInfo
#undef XRRListOutputProperties
#undef XRRQueryOutputProperty
#undef XRRConfigureOutputProperty
#undef XRRChangeOutputProperty
#undef XRRDeleteOutputProperty
#undef XRRGetOutputProperty
#undef XRRAllocModeInfo
#undef XRRCreateMode
#undef XRRDestroyMode
#undef XRRAddOutputMode
#undef XRRDeleteOutputMode
#undef XRRFreeModeInfo
#undef XRRGetCrtcInfo
#undef XRRFreeCrtcInfo
#undef XRRSetCrtcConfig
#undef XRRGetCrtcGammaSize
#undef XRRGetCrtcGamma
#undef XRRAllocGamma
#undef XRRSetCrtcGamma
#undef XRRFreeGamma
#undef XRRGetScreenResourcesCurrent
#undef XRRSetCrtcTransform
#undef XRRGetCrtcTransform
#undef XRRUpdateConfiguration
#undef XRRGetPanning
#undef XRRFreePanning
#undef XRRSetPanning
#undef XRRSetOutputPrimary
#undef XRRGetOutputPrimary
#undef XRRGetProviderResources
#undef XRRFreeProviderResources
#undef XRRGetProviderInfo
#undef XRRFreeProviderInfo
#undef XRRSetProviderOutputSource
#undef XRRSetProviderOffloadSink
#undef XRRListProviderProperties
#undef XRRQueryProviderProperty
#undef XRRConfigureProviderProperty
#undef XRRChangeProviderProperty
#undef XRRDeleteProviderProperty
#undef XRRGetProviderProperty
#undef XRRAllocateMonitor
#undef XRRGetMonitors
#undef XRRSetMonitor
#undef XRRDeleteMonitor
#undef XRRFreeMonitors
#include <dlfcn.h>
#include <stdio.h>
int (*XRRQueryExtension_dylibloader_wrapper_xrandr)( Display*, int*, int*);
int (*XRRQueryVersion_dylibloader_wrapper_xrandr)( Display*, int*, int*);
XRRScreenConfiguration* (*XRRGetScreenInfo_dylibloader_wrapper_xrandr)( Display*, Window);
void (*XRRFreeScreenConfigInfo_dylibloader_wrapper_xrandr)( XRRScreenConfiguration*);
int (*XRRSetScreenConfig_dylibloader_wrapper_xrandr)( Display*, XRRScreenConfiguration*, Drawable, int, Rotation, Time);
int (*XRRSetScreenConfigAndRate_dylibloader_wrapper_xrandr)( Display*, XRRScreenConfiguration*, Drawable, int, Rotation, short, Time);
Rotation (*XRRConfigRotations_dylibloader_wrapper_xrandr)( XRRScreenConfiguration*, Rotation*);
Time (*XRRConfigTimes_dylibloader_wrapper_xrandr)( XRRScreenConfiguration*, Time*);
XRRScreenSize* (*XRRConfigSizes_dylibloader_wrapper_xrandr)( XRRScreenConfiguration*, int*);
short* (*XRRConfigRates_dylibloader_wrapper_xrandr)( XRRScreenConfiguration*, int, int*);
SizeID (*XRRConfigCurrentConfiguration_dylibloader_wrapper_xrandr)( XRRScreenConfiguration*, Rotation*);
short (*XRRConfigCurrentRate_dylibloader_wrapper_xrandr)( XRRScreenConfiguration*);
int (*XRRRootToScreen_dylibloader_wrapper_xrandr)( Display*, Window);
void (*XRRSelectInput_dylibloader_wrapper_xrandr)( Display*, Window, int);
Rotation (*XRRRotations_dylibloader_wrapper_xrandr)( Display*, int, Rotation*);
XRRScreenSize* (*XRRSizes_dylibloader_wrapper_xrandr)( Display*, int, int*);
short* (*XRRRates_dylibloader_wrapper_xrandr)( Display*, int, int, int*);
Time (*XRRTimes_dylibloader_wrapper_xrandr)( Display*, int, Time*);
int (*XRRGetScreenSizeRange_dylibloader_wrapper_xrandr)( Display*, Window, int*, int*, int*, int*);
void (*XRRSetScreenSize_dylibloader_wrapper_xrandr)( Display*, Window, int, int, int, int);
XRRScreenResources* (*XRRGetScreenResources_dylibloader_wrapper_xrandr)( Display*, Window);
void (*XRRFreeScreenResources_dylibloader_wrapper_xrandr)( XRRScreenResources*);
XRROutputInfo* (*XRRGetOutputInfo_dylibloader_wrapper_xrandr)( Display*, XRRScreenResources*, RROutput);
void (*XRRFreeOutputInfo_dylibloader_wrapper_xrandr)( XRROutputInfo*);
Atom* (*XRRListOutputProperties_dylibloader_wrapper_xrandr)( Display*, RROutput, int*);
XRRPropertyInfo* (*XRRQueryOutputProperty_dylibloader_wrapper_xrandr)( Display*, RROutput, Atom);
void (*XRRConfigureOutputProperty_dylibloader_wrapper_xrandr)( Display*, RROutput, Atom, int, int, int, long*);
void (*XRRChangeOutputProperty_dylibloader_wrapper_xrandr)( Display*, RROutput, Atom, Atom, int, int,const unsigned char*, int);
void (*XRRDeleteOutputProperty_dylibloader_wrapper_xrandr)( Display*, RROutput, Atom);
int (*XRRGetOutputProperty_dylibloader_wrapper_xrandr)( Display*, RROutput, Atom, long, long, int, int, Atom, Atom*, int*, unsigned long*, unsigned long*, unsigned char**);
XRRModeInfo* (*XRRAllocModeInfo_dylibloader_wrapper_xrandr)(const char*, int);
RRMode (*XRRCreateMode_dylibloader_wrapper_xrandr)( Display*, Window, XRRModeInfo*);
void (*XRRDestroyMode_dylibloader_wrapper_xrandr)( Display*, RRMode);
void (*XRRAddOutputMode_dylibloader_wrapper_xrandr)( Display*, RROutput, RRMode);
void (*XRRDeleteOutputMode_dylibloader_wrapper_xrandr)( Display*, RROutput, RRMode);
void (*XRRFreeModeInfo_dylibloader_wrapper_xrandr)( XRRModeInfo*);
XRRCrtcInfo* (*XRRGetCrtcInfo_dylibloader_wrapper_xrandr)( Display*, XRRScreenResources*, RRCrtc);
void (*XRRFreeCrtcInfo_dylibloader_wrapper_xrandr)( XRRCrtcInfo*);
int (*XRRSetCrtcConfig_dylibloader_wrapper_xrandr)( Display*, XRRScreenResources*, RRCrtc, Time, int, int, RRMode, Rotation, RROutput*, int);
int (*XRRGetCrtcGammaSize_dylibloader_wrapper_xrandr)( Display*, RRCrtc);
XRRCrtcGamma* (*XRRGetCrtcGamma_dylibloader_wrapper_xrandr)( Display*, RRCrtc);
XRRCrtcGamma* (*XRRAllocGamma_dylibloader_wrapper_xrandr)( int);
void (*XRRSetCrtcGamma_dylibloader_wrapper_xrandr)( Display*, RRCrtc, XRRCrtcGamma*);
void (*XRRFreeGamma_dylibloader_wrapper_xrandr)( XRRCrtcGamma*);
XRRScreenResources* (*XRRGetScreenResourcesCurrent_dylibloader_wrapper_xrandr)( Display*, Window);
void (*XRRSetCrtcTransform_dylibloader_wrapper_xrandr)( Display*, RRCrtc, XTransform*,const char*, XFixed*, int);
int (*XRRGetCrtcTransform_dylibloader_wrapper_xrandr)( Display*, RRCrtc, XRRCrtcTransformAttributes**);
int (*XRRUpdateConfiguration_dylibloader_wrapper_xrandr)( XEvent*);
XRRPanning* (*XRRGetPanning_dylibloader_wrapper_xrandr)( Display*, XRRScreenResources*, RRCrtc);
void (*XRRFreePanning_dylibloader_wrapper_xrandr)( XRRPanning*);
int (*XRRSetPanning_dylibloader_wrapper_xrandr)( Display*, XRRScreenResources*, RRCrtc, XRRPanning*);
void (*XRRSetOutputPrimary_dylibloader_wrapper_xrandr)( Display*, Window, RROutput);
RROutput (*XRRGetOutputPrimary_dylibloader_wrapper_xrandr)( Display*, Window);
XRRProviderResources* (*XRRGetProviderResources_dylibloader_wrapper_xrandr)( Display*, Window);
void (*XRRFreeProviderResources_dylibloader_wrapper_xrandr)( XRRProviderResources*);
XRRProviderInfo* (*XRRGetProviderInfo_dylibloader_wrapper_xrandr)( Display*, XRRScreenResources*, RRProvider);
void (*XRRFreeProviderInfo_dylibloader_wrapper_xrandr)( XRRProviderInfo*);
int (*XRRSetProviderOutputSource_dylibloader_wrapper_xrandr)( Display*, XID, XID);
int (*XRRSetProviderOffloadSink_dylibloader_wrapper_xrandr)( Display*, XID, XID);
Atom* (*XRRListProviderProperties_dylibloader_wrapper_xrandr)( Display*, RRProvider, int*);
XRRPropertyInfo* (*XRRQueryProviderProperty_dylibloader_wrapper_xrandr)( Display*, RRProvider, Atom);
void (*XRRConfigureProviderProperty_dylibloader_wrapper_xrandr)( Display*, RRProvider, Atom, int, int, int, long*);
void (*XRRChangeProviderProperty_dylibloader_wrapper_xrandr)( Display*, RRProvider, Atom, Atom, int, int,const unsigned char*, int);
void (*XRRDeleteProviderProperty_dylibloader_wrapper_xrandr)( Display*, RRProvider, Atom);
int (*XRRGetProviderProperty_dylibloader_wrapper_xrandr)( Display*, RRProvider, Atom, long, long, int, int, Atom, Atom*, int*, unsigned long*, unsigned long*, unsigned char**);
XRRMonitorInfo* (*XRRAllocateMonitor_dylibloader_wrapper_xrandr)( Display*, int);
XRRMonitorInfo* (*XRRGetMonitors_dylibloader_wrapper_xrandr)( Display*, Window, int, int*);
void (*XRRSetMonitor_dylibloader_wrapper_xrandr)( Display*, Window, XRRMonitorInfo*);
void (*XRRDeleteMonitor_dylibloader_wrapper_xrandr)( Display*, Window, Atom);
void (*XRRFreeMonitors_dylibloader_wrapper_xrandr)( XRRMonitorInfo*);
int initialize_xrandr(int verbose) {
  void *handle;
  char *error;
  handle = dlopen("libXrandr.so.2", RTLD_LAZY);
  if (!handle) {
    if (verbose) {
      fprintf(stderr, "%s\n", dlerror());
    }
    return(1);
  }
  dlerror();
// XRRQueryExtension
  *(void **) (&XRRQueryExtension_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRQueryExtension");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRQueryVersion
  *(void **) (&XRRQueryVersion_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRQueryVersion");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetScreenInfo
  *(void **) (&XRRGetScreenInfo_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetScreenInfo");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRFreeScreenConfigInfo
  *(void **) (&XRRFreeScreenConfigInfo_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRFreeScreenConfigInfo");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRSetScreenConfig
  *(void **) (&XRRSetScreenConfig_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRSetScreenConfig");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRSetScreenConfigAndRate
  *(void **) (&XRRSetScreenConfigAndRate_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRSetScreenConfigAndRate");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRConfigRotations
  *(void **) (&XRRConfigRotations_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRConfigRotations");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRConfigTimes
  *(void **) (&XRRConfigTimes_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRConfigTimes");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRConfigSizes
  *(void **) (&XRRConfigSizes_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRConfigSizes");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRConfigRates
  *(void **) (&XRRConfigRates_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRConfigRates");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRConfigCurrentConfiguration
  *(void **) (&XRRConfigCurrentConfiguration_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRConfigCurrentConfiguration");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRConfigCurrentRate
  *(void **) (&XRRConfigCurrentRate_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRConfigCurrentRate");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRRootToScreen
  *(void **) (&XRRRootToScreen_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRRootToScreen");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRSelectInput
  *(void **) (&XRRSelectInput_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRSelectInput");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRRotations
  *(void **) (&XRRRotations_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRRotations");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRSizes
  *(void **) (&XRRSizes_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRSizes");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRRates
  *(void **) (&XRRRates_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRRates");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRTimes
  *(void **) (&XRRTimes_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRTimes");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetScreenSizeRange
  *(void **) (&XRRGetScreenSizeRange_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetScreenSizeRange");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRSetScreenSize
  *(void **) (&XRRSetScreenSize_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRSetScreenSize");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetScreenResources
  *(void **) (&XRRGetScreenResources_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetScreenResources");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRFreeScreenResources
  *(void **) (&XRRFreeScreenResources_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRFreeScreenResources");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetOutputInfo
  *(void **) (&XRRGetOutputInfo_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetOutputInfo");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRFreeOutputInfo
  *(void **) (&XRRFreeOutputInfo_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRFreeOutputInfo");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRListOutputProperties
  *(void **) (&XRRListOutputProperties_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRListOutputProperties");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRQueryOutputProperty
  *(void **) (&XRRQueryOutputProperty_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRQueryOutputProperty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRConfigureOutputProperty
  *(void **) (&XRRConfigureOutputProperty_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRConfigureOutputProperty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRChangeOutputProperty
  *(void **) (&XRRChangeOutputProperty_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRChangeOutputProperty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRDeleteOutputProperty
  *(void **) (&XRRDeleteOutputProperty_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRDeleteOutputProperty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetOutputProperty
  *(void **) (&XRRGetOutputProperty_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetOutputProperty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRAllocModeInfo
  *(void **) (&XRRAllocModeInfo_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRAllocModeInfo");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRCreateMode
  *(void **) (&XRRCreateMode_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRCreateMode");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRDestroyMode
  *(void **) (&XRRDestroyMode_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRDestroyMode");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRAddOutputMode
  *(void **) (&XRRAddOutputMode_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRAddOutputMode");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRDeleteOutputMode
  *(void **) (&XRRDeleteOutputMode_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRDeleteOutputMode");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRFreeModeInfo
  *(void **) (&XRRFreeModeInfo_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRFreeModeInfo");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetCrtcInfo
  *(void **) (&XRRGetCrtcInfo_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetCrtcInfo");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRFreeCrtcInfo
  *(void **) (&XRRFreeCrtcInfo_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRFreeCrtcInfo");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRSetCrtcConfig
  *(void **) (&XRRSetCrtcConfig_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRSetCrtcConfig");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetCrtcGammaSize
  *(void **) (&XRRGetCrtcGammaSize_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetCrtcGammaSize");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetCrtcGamma
  *(void **) (&XRRGetCrtcGamma_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetCrtcGamma");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRAllocGamma
  *(void **) (&XRRAllocGamma_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRAllocGamma");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRSetCrtcGamma
  *(void **) (&XRRSetCrtcGamma_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRSetCrtcGamma");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRFreeGamma
  *(void **) (&XRRFreeGamma_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRFreeGamma");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetScreenResourcesCurrent
  *(void **) (&XRRGetScreenResourcesCurrent_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetScreenResourcesCurrent");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRSetCrtcTransform
  *(void **) (&XRRSetCrtcTransform_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRSetCrtcTransform");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetCrtcTransform
  *(void **) (&XRRGetCrtcTransform_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetCrtcTransform");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRUpdateConfiguration
  *(void **) (&XRRUpdateConfiguration_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRUpdateConfiguration");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetPanning
  *(void **) (&XRRGetPanning_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetPanning");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRFreePanning
  *(void **) (&XRRFreePanning_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRFreePanning");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRSetPanning
  *(void **) (&XRRSetPanning_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRSetPanning");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRSetOutputPrimary
  *(void **) (&XRRSetOutputPrimary_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRSetOutputPrimary");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetOutputPrimary
  *(void **) (&XRRGetOutputPrimary_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetOutputPrimary");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetProviderResources
  *(void **) (&XRRGetProviderResources_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetProviderResources");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRFreeProviderResources
  *(void **) (&XRRFreeProviderResources_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRFreeProviderResources");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetProviderInfo
  *(void **) (&XRRGetProviderInfo_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetProviderInfo");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRFreeProviderInfo
  *(void **) (&XRRFreeProviderInfo_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRFreeProviderInfo");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRSetProviderOutputSource
  *(void **) (&XRRSetProviderOutputSource_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRSetProviderOutputSource");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRSetProviderOffloadSink
  *(void **) (&XRRSetProviderOffloadSink_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRSetProviderOffloadSink");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRListProviderProperties
  *(void **) (&XRRListProviderProperties_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRListProviderProperties");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRQueryProviderProperty
  *(void **) (&XRRQueryProviderProperty_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRQueryProviderProperty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRConfigureProviderProperty
  *(void **) (&XRRConfigureProviderProperty_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRConfigureProviderProperty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRChangeProviderProperty
  *(void **) (&XRRChangeProviderProperty_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRChangeProviderProperty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRDeleteProviderProperty
  *(void **) (&XRRDeleteProviderProperty_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRDeleteProviderProperty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetProviderProperty
  *(void **) (&XRRGetProviderProperty_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetProviderProperty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRAllocateMonitor
  *(void **) (&XRRAllocateMonitor_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRAllocateMonitor");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRGetMonitors
  *(void **) (&XRRGetMonitors_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRGetMonitors");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRSetMonitor
  *(void **) (&XRRSetMonitor_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRSetMonitor");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRDeleteMonitor
  *(void **) (&XRRDeleteMonitor_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRDeleteMonitor");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRRFreeMonitors
  *(void **) (&XRRFreeMonitors_dylibloader_wrapper_xrandr) = dlsym(handle, "XRRFreeMonitors");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
return 0;
}
