#ifndef FFMPEG_CONFIG_H
#define FFMPEG_CONFIG_H

#ifdef __GNUC__
  #define ARCH_X86 1
  #define HAVE_INLINE_ASM 1
  #define HAVE_AMD3DNOW 1
  #define HAVE_AMD3DNOWEXT 1
  #define HAVE_AVX 1
  #define HAVE_MMX 1
  #define HAVE_MMX2 1
  #define HAVE_SSE 1
  #define HAVE_SSSE3 1

  #ifdef ARCH_X86_64
    #define ARCH_X86_32 0
    #define ARCH_X86_64 1
    #define HAVE_FAST_64BIT 1
    #define HAVE_GETADDRINFO 1
  #else
    #define ARCH_X86_32 1
    #define ARCH_X86_64 0
    #define HAVE_FAST_64BIT 0
    #define HAVE_GETADDRINFO 0
  #endif

  #define PTW32_STATIC_LIB 1
  #define restrict restrict
#else
  #define HAVE_INLINE_ASM 0
  #define HAVE_AMD3DNOW 0
  #define HAVE_AMD3DNOWEXT 0
  #define HAVE_AVX 0
  #define HAVE_MMX 0
  #define HAVE_MMX2 0
  #define HAVE_SSE 0
  #define HAVE_SSSE3 0
  #define ARCH_X86 0
  #define ARCH_X86_32 0
  #define ARCH_X86_64 0
  #define HAVE_FAST_64BIT 0

  #define restrict
  #define __asm__ __asm
  #define inline __inline
#endif

// Use DPRINTF instead of av_log. To be used for debug purpose because DPRINTF will be always called (the
// registry switch is not read)
#define USE_DPRINTF 0

#define FFMPEG_CONFIGURATION "ffmpeg configuration"
#define FFMPEG_LICENSE "GPL version 2 or later"

#define CC_TYPE "gcc"
#define CC_VERSION __VERSION__

#define ASMALIGN(ZEROBITS) ".p2align " #ZEROBITS "\n\t"

// MPC custom code for linking with MSVC
#if defined(__GNUC__) && ARCH_X86_64
  #define EXTERN_PREFIX ""
#else
  #define EXTERN_PREFIX "_"
#endif
#define EXTERN_ASM _

#define ARCH_ALPHA 0
#define ARCH_ARM 0
#define ARCH_AVR32 0
#define ARCH_AVR32_AP 0
#define ARCH_AVR32_UC 0
#define ARCH_BFIN 0
#define ARCH_IA64 0
#define ARCH_M68K 0
#define ARCH_MIPS 0
#define ARCH_MIPS64 0
#define ARCH_PARISC 0
#define ARCH_PPC 0
#define ARCH_PPC64 0
#define ARCH_S390 0
#define ARCH_SH4 0
#define ARCH_SPARC 0
#define ARCH_SPARC64 0
#define ARCH_TOMI 0

#define HAVE_ALTIVEC 0
#define HAVE_ARMV5TE 0
#define HAVE_ARMV6 0
#define HAVE_ARMV6T2 0
#define HAVE_ARMVFP 0
#define HAVE_MIPSFPU 0
#define HAVE_MMI 0
#define HAVE_NEON 0
#define HAVE_PPC4XX 0
#define HAVE_VFPV3 0
#define HAVE_VIS 0

#define HAVE_ALIGNED_STACK 1
#define HAVE_ALSA_ASOUNDLIB_H 0
#define HAVE_ALTIVEC_H 0
#define HAVE_ARPA_INET_H 0
#define HAVE_ASM_MOD_Y 0
#define HAVE_ASM_TYPES_H 0
#define HAVE_BIGENDIAN 0
#define HAVE_CBRTF 1
#define HAVE_CLOCK_GETTIME 0
#define HAVE_CLOSESOCKET 1
#define HAVE_CMOV 1
#define HAVE_DCBZL 0
#define HAVE_DEV_BKTR_IOCTL_BT848_H 0
#define HAVE_DEV_BKTR_IOCTL_METEOR_H 0
#define HAVE_DEV_IC_BT8XX_H 0
#define HAVE_DEV_VIDEO_BKTR_IOCTL_BT848_H 0
#define HAVE_DEV_VIDEO_METEOR_IOCTL_METEOR_H 0
#define HAVE_DLFCN_H 1
#define HAVE_DLOPEN 1
#define HAVE_DOS_PATHS 1
#define HAVE_EBP_AVAILABLE 1
#define HAVE_EBX_AVAILABLE 1
#define HAVE_FAST_CLZ 1
#define HAVE_FAST_CMOV 1
#define HAVE_FCNTL 0
#define HAVE_FORK 0
#define HAVE_GETHRTIME 0
#define HAVE_GETPROCESSAFFINITYMASK 1
#define HAVE_GETPROCESSMEMORYINFO 1
#define HAVE_GETPROCESSTIMES 1
#define HAVE_GETRUSAGE 0
#define HAVE_GLOB 0
#define HAVE_GNU_AS 1
#define HAVE_IBM_ASM 0
#define HAVE_INET_ATON 0
#define HAVE_FAST_UNALIGNED 1
#define HAVE_ISATTY 1
#define HAVE_KBHIT 1
#define HAVE_LDBRX 0
#define HAVE_LIBDC1394_1 0
#define HAVE_LIBDC1394_2 0
#define HAVE_LLRINTF 1
#define HAVE_LOCAL_ALIGNED_16 1
#define HAVE_LOCAL_ALIGNED_8 1
#define HAVE_LOCALTIME_R 0
#define HAVE_LOG2 1
#define HAVE_LOG2F 1
#define HAVE_LOONGSON 0
#define HAVE_LZO1X_999_COMPRESS 0
#define HAVE_MACHINE_IOCTL_BT848_H 0
#define HAVE_MACHINE_IOCTL_METEOR_H 0
#define HAVE_MAKEINFO 1
#define HAVE_MALLOC_H 1
#define HAVE_MEMALIGN 1 // this is 0 in vanilla ffmpeg
#define HAVE_MAPVIEWOFFILE 1
#define HAVE_MKSTEMP 0
#define HAVE_MMAP 0
#define HAVE_NETINET_SCTP_H 0
#define HAVE_PEEKNAMEDPIPE 1
#define HAVE_POLL_H 0
#define HAVE_POSIX_MEMALIGN 0
#define HAVE_SCHED_GETAFFINITY 0
#define HAVE_SDL 0
#define HAVE_SDL_VIDEO_SIZE 0
#define HAVE_SETMODE 1
#define HAVE_SETRLIMIT 0
#define HAVE_SNDIO_H 0
#define HAVE_SOCKLEN_T 1
#define HAVE_SOUNDCARD_H 0
#define HAVE_STRERROR_R 0
#define HAVE_STRPTIME 0
#define HAVE_STRUCT_ADDRINFO 1
#define HAVE_STRUCT_IPV6_MREQ 1
#define HAVE_STRUCT_RUSAGE_RU_MAXRSS 0
#define HAVE_STRUCT_SOCKADDR_IN6 1
#define HAVE_STRUCT_SOCKADDR_SA_LEN 0
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#define HAVE_STRUCT_V4L2_FRMIVALENUM_DISCRETE 0
#define HAVE_SYMVER 1
#define HAVE_SYMVER_ASM_LABEL 1
#define HAVE_SYMVER_GNU_ASM 0
#define HAVE_SYSCONF 0
#define HAVE_SYSCTL 0
#define HAVE_SYS_MMAN_H 0
#define HAVE_SYS_PARAM_H 1
#define HAVE_SYS_RESOURCE_H 0
#define HAVE_SYS_SELECT_H 0
#define HAVE_SYS_SOUNDCARD_H 0
#define HAVE_SYS_VIDEOIO_H 0
#define HAVE_TERMIOS_H 0
#define HAVE_VFP_ARGS 0
#define HAVE_WINSOCK2_H 1
#define HAVE_XFORM_ASM 0


#define HAVE_THREADS 1
#define HAVE_W32THREADS 1
#define HAVE_PTHREADS 0
#define HAVE_OS2THREADS 0
#define HAVE_VIRTUALALLOC 1
#define HAVE_XMM_CLOBBERS 1
#define HAVE_YASM 1

#ifdef __GNUC__
  #define HAVE_ATTRIBUTE_PACKED 1
  #define HAVE_ATTRIBUTE_MAY_ALIAS 1

  #define HAVE_EXP2 1
  #define HAVE_EXP2F 1
  #define HAVE_LLRINT 1
  #define HAVE_LRINT 1
  #define HAVE_LRINTF 1
  #define HAVE_ROUND 1
  #define HAVE_ROUNDF 1
  #define HAVE_TRUNC 1
  #define HAVE_TRUNCF 1

#else
  #define HAVE_ATTRIBUTE_PACKED 0
  #define HAVE_ATTRIBUTE_MAY_ALIAS 0
  #define EMULATE_FAST_INT

  #define HAVE_EXP2 1
  #define HAVE_EXP2F 1
  #define HAVE_LLRINT 0
  #define HAVE_LOG2 1
  #define HAVE_LOG2F 1
  #define HAVE_LRINT 0
  #define HAVE_LRINTF 0
  #define HAVE_ROUND 0
  #define HAVE_ROUNDF 1
  #define HAVE_TRUNCF 1
  #define rint(x) (int)(x+0.5)
  #define cbrtf(x) pow((float)x, (float)1.0/3)
#endif

#define CONFIG_AC3ENC_FLOAT 0
#define CONFIG_AUDIO_FLOAT 1
#define CONFIG_DCT 1
#define CONFIG_DWT 0
#define CONFIG_GPL 1
#define CONFIG_GRAY 1
#define CONFIG_H264CHROMA 1
#define CONFIG_H264DSP 1
#define CONFIG_H264PRED 1
#define CONFIG_H264QPEL 1
#define CONFIG_HARDCODED_TABLES 0
#define CONFIG_HUFFMAN 1
#define CONFIG_LIBXVID 0
#define CONFIG_LPC 0
#define CONFIG_MDCT 1
#define CONFIG_MPEGAUDIO_HP 1
#define CONFIG_RDFT 1
#define CONFIG_RUNTIME_CPUDETECT 1
#define CONFIG_SMALL 0
#define CONFIG_ZLIB 1

#define CONFIG_DECODERS 1
#define CONFIG_ENCODERS 0
#define CONFIG_SWSCALE 1
#define CONFIG_SWSCALE_ALPHA 1
#define CONFIG_POSTPROC 0

/* 
Note: when adding a new codec, you have to:
1)  Add a
    #define CONFIG_<codec suffix>_<ENCODER|DECODER|PARSER>
    depending on the type of codec you are adding
2)  Add a
    REGISTER_<ENCODER|DECODER|PARSER> (<codec suffix>, <codec suffix lowercase>);
    line to libavcodec/allcodecs.c
*/

#include "../../mpc-hc/InternalFiltersConfig.h"

#define CONFIG_AASC_DECODER 0
#define CONFIG_AMV_DECODER INTERNAL_DECODER_AMVV
#define CONFIG_ASV1_DECODER 0
#define CONFIG_ASV2_DECODER 0
#define CONFIG_AVS_DECODER 0
#define CONFIG_CAVS_DECODER 0
#define CONFIG_CINEPAK_DECODER 0
#define CONFIG_CSCD_DECODER 0
#define CONFIG_CYUV_DECODER 0
#define CONFIG_DVVIDEO_DECODER 0
#define CONFIG_EIGHTBPS_DECODER 0
#define CONFIG_FFV1_DECODER 0
#define CONFIG_FFVHUFF_DECODER 0
#define CONFIG_FLV_DECODER INTERNAL_DECODER_FLV
#define CONFIG_FRAPS_DECODER 0
#define CONFIG_H261_DECODER 0
#define CONFIG_H263_DECODER INTERNAL_DECODER_H263
#define CONFIG_H263I_DECODER INTERNAL_DECODER_H263
#define CONFIG_H264_DECODER (INTERNAL_DECODER_H264 || INTERNAL_DECODER_H264_DXVA)
#define CONFIG_HUFFYUV_DECODER 0
#define CONFIG_INDEO2_DECODER 0
#define CONFIG_INDEO3_DECODER INTERNAL_DECODER_INDEO
#define CONFIG_INDEO4_DECODER INTERNAL_DECODER_INDEO
#define CONFIG_INDEO5_DECODER INTERNAL_DECODER_INDEO
#define CONFIG_JPEGLS_DECODER 0
#define CONFIG_LOCO_DECODER 0
#define CONFIG_MJPEG_DECODER INTERNAL_DECODER_MJPEG
#define CONFIG_MJPEGB_DECODER INTERNAL_DECODER_MJPEG
#define CONFIG_MPEG1VIDEO_DECODER 0
#define CONFIG_MPEG2VIDEO_DECODER INTERNAL_DECODER_MPEG2_DXVA
#define CONFIG_MPEG4_DECODER (INTERNAL_DECODER_XVID || INTERNAL_DECODER_DIVX)
#define CONFIG_MPEGVIDEO_DECODER 0
#define CONFIG_MSMPEG4V1_DECODER INTERNAL_DECODER_MSMPEG4
#define CONFIG_MSMPEG4V2_DECODER INTERNAL_DECODER_MSMPEG4
#define CONFIG_MSMPEG4V3_DECODER INTERNAL_DECODER_MSMPEG4
#define CONFIG_MSRLE_DECODER 0
#define CONFIG_MSVIDEO1_DECODER 0
#define CONFIG_MSZH_DECODER 0
#define CONFIG_PNG_DECODER 0
#define CONFIG_QPEG_DECODER 0
#define CONFIG_QTRLE_DECODER 0
#define CONFIG_RPZA_DECODER 0
#define CONFIG_RV10_DECODER INTERNAL_DECODER_REALVIDEO
#define CONFIG_RV20_DECODER INTERNAL_DECODER_REALVIDEO
#define CONFIG_RV30_DECODER INTERNAL_DECODER_REALVIDEO
#define CONFIG_RV40_DECODER INTERNAL_DECODER_REALVIDEO
#define CONFIG_SNOW_DECODER 0
#define CONFIG_SP5X_DECODER INTERNAL_DECODER_MJPEG
#define CONFIG_SVQ1_DECODER INTERNAL_DECODER_SVQ
#define CONFIG_SVQ3_DECODER INTERNAL_DECODER_SVQ
#define CONFIG_THEORA_DECODER INTERNAL_DECODER_THEORA
#define CONFIG_TRUEMOTION1_DECODER 0
#define CONFIG_TRUEMOTION2_DECODER 0
#define CONFIG_TSCC_DECODER HAS_FFMPEG_VIDEO_DECODERS
#define CONFIG_ULTI_DECODER 0
#define CONFIG_VC1_DECODER (INTERNAL_DECODER_VC1 || INTERNAL_DECODER_VC1_DXVA)
#define CONFIG_VC1IMAGE_DECODER 0
#define CONFIG_VCR1_DECODER 0
#define CONFIG_VP3_DECODER INTERNAL_DECODER_VP356
#define CONFIG_VP5_DECODER INTERNAL_DECODER_VP356
#define CONFIG_VP6_DECODER INTERNAL_DECODER_VP356
#define CONFIG_VP6A_DECODER INTERNAL_DECODER_VP356
#define CONFIG_VP6F_DECODER INTERNAL_DECODER_VP356
#define CONFIG_VP8_DECODER INTERNAL_DECODER_VP8
#define CONFIG_WMV1_DECODER INTERNAL_DECODER_WMV
#define CONFIG_WMV2_DECODER INTERNAL_DECODER_WMV
#define CONFIG_WMV3_DECODER INTERNAL_DECODER_WMV
#define CONFIG_WMV3IMAGE_DECODER 0
#define CONFIG_WNV1_DECODER 0
#define CONFIG_XL_DECODER 0
#define CONFIG_ZLIB_DECODER 0
#define CONFIG_ZMBV_DECODER 0

#define CONFIG_AAC_DECODER INTERNAL_DECODER_AAC
#define CONFIG_AAC_LATM_DECODER INTERNAL_DECODER_AAC
#define CONFIG_AC3_DECODER INTERNAL_DECODER_AC3
#define CONFIG_ALAC_DECODER INTERNAL_DECODER_ALAC
#define CONFIG_ALS_DECODER INTERNAL_DECODER_ALS
#define CONFIG_ATRAC3_DECODER INTERNAL_DECODER_REALAUDIO
#define CONFIG_COOK_DECODER INTERNAL_DECODER_REALAUDIO
#define CONFIG_DCA_DECODER 0
#define CONFIG_EAC3_DECODER INTERNAL_DECODER_AC3
#define CONFIG_FLAC_DECODER 0
#define CONFIG_GSM_DECODER 0
#define CONFIG_GSM_MS_DECODER 0
#define CONFIG_IMC_DECODER 0
#define CONFIG_MACE3_DECODER 0
#define CONFIG_MACE6_DECODER 0
#define CONFIG_MLP_DECODER INTERNAL_DECODER_AC3
#define CONFIG_MP1_DECODER 0
#define CONFIG_MP1FLOAT_DECODER INTERNAL_DECODER_MPEGAUDIO
#define CONFIG_MP2_DECODER 0
#define CONFIG_MP2FLOAT_DECODER INTERNAL_DECODER_MPEGAUDIO
#define CONFIG_MP3_DECODER 0
#define CONFIG_MP3FLOAT_DECODER INTERNAL_DECODER_MPEGAUDIO
#define CONFIG_NELLYMOSER_DECODER INTERNAL_DECODER_NELLYMOSER
#define CONFIG_QDM2_DECODER 0
#define CONFIG_RA_144_DECODER INTERNAL_DECODER_REALAUDIO
#define CONFIG_RA_288_DECODER INTERNAL_DECODER_REALAUDIO
#define CONFIG_SIPR_DECODER INTERNAL_DECODER_REALAUDIO
#define CONFIG_TRUEHD_DECODER INTERNAL_DECODER_AC3
#define CONFIG_TRUESPEECH_DECODER 0
#define CONFIG_TTA_DECODER 0
#define CONFIG_VORBIS_DECODER INTERNAL_DECODER_VORBIS
#define CONFIG_WAVPACK_DECODER 0
#define CONFIG_WMAV1_DECODER 0
#define CONFIG_WMAV2_DECODER 0
#define CONFIG_PCM_ALAW_DECODER 0
#define CONFIG_PCM_MULAW_DECODER 0
#define CONFIG_ADPCM_4XM_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_ADX_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_CT_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_EA_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_G726_DECODER 0
#define CONFIG_ADPCM_IMA_AMV_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_IMA_DK3_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_IMA_DK4_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_IMA_QT_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_IMA_SMJPEG_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_IMA_WAV_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_IMA_WS_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_MS_DECODER 0
#define CONFIG_ADPCM_SBPRO_2_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_SBPRO_3_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_SBPRO_4_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_SWF_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_XA_DECODER INTERNAL_DECODER_ADPCM
#define CONFIG_ADPCM_YAMAHA_DECODER INTERNAL_DECODER_ADPCM

#define CONFIG_DVVIDEO_ENCODER 0
#define CONFIG_FFV1_ENCODER 0
#define CONFIG_FFVHUFF_ENCODER 0
#define CONFIG_FLV_ENCODER 0
#define CONFIG_H261_ENCODER 0
#define CONFIG_H263_ENCODER 0
#define CONFIG_H263P_ENCODER 0
#define CONFIG_H264_ENCODER 0
#define CONFIG_HUFFYUV_ENCODER 0
#define CONFIG_LJPEG_ENCODER 0
#define CONFIG_MJPEG_ENCODER 0
#define CONFIG_MPEG1VIDEO_ENCODER 0
#define CONFIG_MPEG2VIDEO_ENCODER 0
#define CONFIG_MPEG4_ENCODER 0
#define CONFIG_MSMPEG4V1_ENCODER 0
#define CONFIG_MSMPEG4V2_ENCODER 0
#define CONFIG_MSMPEG4V3_ENCODER 0
#define CONFIG_PNG_ENCODER 0
#define CONFIG_RV10_ENCODER 0
#define CONFIG_RV20_ENCODER 0
#define CONFIG_SNOW_ENCODER 0
#define CONFIG_WMV1_ENCODER 0
#define CONFIG_WMV2_ENCODER 0

#define CONFIG_AC3_ENCODER 0
#define CONFIG_AC3_FIXED_ENCODER 0
#define CONFIG_EAC3_ENCODER 0

#define CONFIG_AAC_PARSER 0
#define CONFIG_AC3_PARSER INTERNAL_DECODER_AC3
#define CONFIG_DCA_PARSER 0
#define CONFIG_H263_PARSER 0
#define CONFIG_H264_PARSER 0
#define CONFIG_MJPEG_PARSER 0
#define CONFIG_MPEGAUDIO_PARSER INTERNAL_DECODER_MPEGAUDIO
#define CONFIG_MPEG4VIDEO_PARSER 0
#define CONFIG_MLP_PARSER INTERNAL_DECODER_AC3
#define CONFIG_MPEGVIDEO_PARSER INTERNAL_DECODER_MPEG2_DXVA

#define CONFIG_AMRNB_DECODER INTERNAL_DECODER_AMR
#define CONFIG_AMRWB_DECODER INTERNAL_DECODER_AMR

#define CONFIG_VC1_VDPAU_DECODER 0
#define CONFIG_MPEG_XVMC_DECODER 0

#define CONFIG_EATGQ_DECODER 0
#define CONFIG_MPEG4_VDPAU_DECODER 0
#define CONFIG_H264_VDPAU_DECODER 0
#define CONFIG_VDPAU 0

#endif /* FFMPEG_CONFIG_H */
