/* Auto-generated config file hpl_ssc_config.h */
#ifndef HPL_SSC_CONFIG_H
#define HPL_SSC_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

// Transmit Enable
#ifndef CONF_SSC_TXEN
#define CONF_SSC_TXEN 1
#endif

// Receive Enable
#ifndef CONF_SSC_RXEN
#define CONF_SSC_RXEN 0
#endif

// Transmit Clock Selection
#ifndef CONF_SSC_TCMR_CKS
#define CONF_SSC_TCMR_CKS 0
#endif

// Transmit Clock Output Mode Selection
#ifndef CONF_SSC_TCMR_CKO
#define CONF_SSC_TCMR_CKO 1
#endif

// Transmit Clock Inversion
#ifndef CONF_SSC_TCMR_CKI
#define CONF_SSC_TCMR_CKI 0
#endif

// Transmit Start Delay
#ifndef CONF_SSC_TCMR_STTDLY
#define CONF_SSC_TCMR_STTDLY 1
#endif

// Transmit Frame Sync Output Selection
#ifndef CONF_SSC_TFMR_FSOS
#define CONF_SSC_TFMR_FSOS 1
#endif

// Transmit Frame Sync Edge Detection
#ifndef CONF_SSC_TFMR_FSEDGE
#define CONF_SSC_TFMR_FSEDGE 0
#endif

// Receiver Clock Selection
#ifndef CONF_SSC_RCMR_CKS
#define CONF_SSC_RCMR_CKS 0
#endif

// Receiver Clock Output Mode Selection
#ifndef CONF_SSC_RCMR_CKO
#define CONF_SSC_RCMR_CKO 0
#endif

// Receiver Clock Inversion
#ifndef CONF_SSC_RCMR_CKI
#define CONF_SSC_RCMR_CKI 0
#endif

// Receiver Start Delay
#ifndef CONF_SSC_RCMR_STTDLY
#define CONF_SSC_RCMR_STTDLY 0
#endif

// Receiver Frame Sync Output Selection
#ifndef CONF_SSC_RFMR_FSOS
#define CONF_SSC_RFMR_FSOS 0
#endif

// Receiver Frame Sync Edge Detection
#ifndef CONF_SSC_RFMR_FSEDGE
#define CONF_SSC_RFMR_FSEDGE 0
#endif

// <h> Control Signals Basic Settings
// <o> Clock Divider <1-4095>
// <i> This defines the divided clock equals the peripheral clock divided by 2 times DIV.
// <id> ssc_div
#ifndef CONF_SSC_DIV
#define CONF_SSC_DIV 50
#endif
// <e> Control 0: Transmitter Settings
// <id> ssc_tx_enable
#ifndef CONF_SSC_TX_ENABLE
#define CONF_SSC_TX_ENABLE 1
#endif

// <o> Transmit Frame Sync Length <1-256>
// <i> This field is used to determine the pulse length of the Transmit Frame Sync signal.
// <i> E.g. If the value is 5, it means 5 SCK.
// <id> ssc_tframe_length
#ifndef CONF_SSC_TFRAME_LENGTH
#define CONF_SSC_TFRAME_LENGTH 5
#endif

// </e>

/* Transmit Data Length */
#ifndef CONF_SSC_TFMR_DATLEN
#define CONF_SSC_TFMR_DATLEN 1
#endif

/* FSLEN: Frame Sync Length */
#ifndef CONF_SSC_TFMR_FSLEN
#define CONF_SSC_TFMR_FSLEN ((CONF_SSC_TFRAME_LENGTH - 1) & 0xF)
#endif

/* FSLEN_EXT: FSLEN Field Extension */
#ifndef CONF_SSC_TFMR_FSLEN_EXT
#define CONF_SSC_TFMR_FSLEN_EXT (((CONF_SSC_TFRAME_LENGTH - 1) & 0xF0) >> 4)
#endif

/* Transmit Period Divider Selection */
#ifndef CONF_SSC_TCMR_PERIOD
#define CONF_SSC_TCMR_PERIOD (CONF_SSC_TFRAME_LENGTH - 1)
#endif

// </h>

// <<< end of configuration section >>>

#endif // HPL_SSC_CONFIG_H
