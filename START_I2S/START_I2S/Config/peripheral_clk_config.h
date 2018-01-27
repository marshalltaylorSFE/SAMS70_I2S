/* Auto-generated config file peripheral_clk_config.h */
#ifndef PERIPHERAL_CLK_CONFIG_H
#define PERIPHERAL_CLK_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

/**
* \def CONF_HCLK_FREQUENCY
* \brief HCLK's Clock frequency
*/
#ifndef CONF_HCLK_FREQUENCY
#define CONF_HCLK_FREQUENCY 282240000
#endif

/**
 * \def CONF_FCLK_FREQUENCY
 * \brief FCLK's Clock frequency
 */
#ifndef CONF_FCLK_FREQUENCY
#define CONF_FCLK_FREQUENCY 282240000
#endif

/**
 * \def CONF_CPU_FREQUENCY
 * \brief CPU's Clock frequency
 */
#ifndef CONF_CPU_FREQUENCY
#define CONF_CPU_FREQUENCY 282240000
#endif

/**
 * \def CONF_SLCK_FREQUENCY
 * \brief Slow Clock frequency
 */
#define CONF_SLCK_FREQUENCY 32000

/**
 * \def CONF_MCK_FREQUENCY
 * \brief Master Clock frequency
 */
#define CONF_MCK_FREQUENCY 141120000

/**
 * \def CONF_PCK6_FREQUENCY
 * \brief Programmable Clock Controller 6 frequency
 */
#define CONF_PCK6_FREQUENCY 11289600

// <h> SSC Clock Source
// <y> SSC Clock source Transmitter Settings
// <CONF_SRC_MCK"> Master Clock (MCK)
// <i> This defines the clock source for the SSC
// <id> ssc_clock_source
#ifndef CONF_SSC_SRC
#define CONF_SSC_SRC CONF_SRC_MCK
#endif
// </h>

/**
 * \def SSC FREQUENCY
 * \brief SSC's Clock frequency
 */
#ifndef CONF_SSC_FREQUENCY
#define CONF_SSC_FREQUENCY 141120000
#endif

// <h> TWIHS Clock Settings
// <y> TWIHS Clock source
// <CONF_SRC_MCK"> Master Clock (MCK)
// <i> This defines the clock source for the TWIHS
// <id> twihs_clock_source
#ifndef CONF_TWIHS0_SRC
#define CONF_TWIHS0_SRC CONF_SRC_MCK
#endif
// </h>

/**
 * \def TWIHS FREQUENCY
 * \brief TWIHS's Clock frequency
 */
#ifndef CONF_TWIHS0_FREQUENCY
#define CONF_TWIHS0_FREQUENCY 141120000
#endif

// <h> UART Clock Settings
// <o> UART Clock source
// <0=> Master Clock (MCK)
// <1=> Programmable Clock Controller 4 (PMC_PCK4)
// <i> This defines the clock source for the UART
// <id> uart_clock_source
#ifndef CONF_UART3_CK_SRC
#define CONF_UART3_CK_SRC 0
#endif
// </h>

/**
 * \def UART FREQUENCY
 * \brief UART's Clock frequency
 */
#ifndef CONF_UART3_FREQUENCY
#define CONF_UART3_FREQUENCY 141120000
#endif

// <<< end of configuration section >>>

#endif // PERIPHERAL_CLK_CONFIG_H
