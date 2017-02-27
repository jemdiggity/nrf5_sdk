/* Copyright (c) 2016 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

#ifndef APP_USBD_HID_TYPES_H__
#define APP_USBD_HID_TYPES_H__

#include <stdint.h>

#include "sdk_common.h"

/**
 * @defgroup app_usbd_hid_types USB HID class types
 * @ingroup app_usbd_hid
 *
 * @brief @tagAPI52840 Module with types and definitions used by HID modules.
 * @{
 */

/**
 * @brief HID class definition in interface descriptor.
 *
 * @ref app_usbd_descriptor_iface_t::bInterfaceClass
 * */
#define  APP_USBD_HID_CLASS 0x03

/**
 * @brief HID subclass definition.
 *
 * @see HID 1.11 specification: Chapter 4.2 Subclass.
 * @ref app_usbd_descriptor_iface_t::bInterfaceSubClass
 * */
typedef enum {
    APP_USBD_HID_SUBCLASS_NONE = 0x00, /**< Undefined subclass. */
    APP_USBD_HID_SUBCLASS_BOOT = 0x01, /**< Boot subclass.      */
} app_usbd_hid_subclass_t;

/**
 * @brief HID protocol types defined by specification.
 *
 * Value need to be filled in interface descriptor.
 * @ref app_usbd_descriptor_iface_t::bInterfaceProtocol
 */
typedef enum {
    APP_USBD_HID_PROTO_GENERIC    = 0x00, /**< GENERIC protocol.    */
    APP_USBD_HID_PROTO_KEYBOARD   = 0x01, /**< KEYBOARD protocol.   */
    APP_USBD_HID_PROTO_MOUSE      = 0x02, /**< MOUSE protocol.      */
    APP_USBD_HID_PROTO_MULTITOUCH = 0x03, /**< MULTITOUCH protocol. */
} app_usbd_hid_protocol_t;


/**
 * @brief HID country code ID.
 *
 * Look into @ref app_usbd_hid_descriptor_t::bCountryCode.
 */
typedef enum {
    APP_USBD_HID_COUNTRY_NOT_SUPPORTED     = 0 , /**< NOT_SUPPORTED        */
    APP_USBD_HID_COUNTRY_ARABIC            = 1 , /**< ARABIC               */
    APP_USBD_HID_COUNTRY_BELGIAN           = 2 , /**< BELGIAN              */
    APP_USBD_HID_COUNTRY_CANADIAN_BILINGUAL= 3 , /**< CANADIAN_BILINGUAL   */
    APP_USBD_HID_COUNTRY_CANADIAN_FRENCH   = 4 , /**< CANADIAN_FRENCH      */
    APP_USBD_HID_COUNTRY_CZECH_REPUBLIC    = 5 , /**< CZECH_REPUBLIC       */
    APP_USBD_HID_COUNTRY_DANISH            = 6 , /**< DANISH               */
    APP_USBD_HID_COUNTRY_FINNISH           = 7 , /**< FINNISH              */
    APP_USBD_HID_COUNTRY_FRENCH            = 8 , /**< FRENCH               */
    APP_USBD_HID_COUNTRY_GERMAN            = 9 , /**< GERMAN               */
    APP_USBD_HID_COUNTRY_GREEK             = 10, /**< GREEK                */
    APP_USBD_HID_COUNTRY_HEBREW            = 11, /**< HEBREW               */
    APP_USBD_HID_COUNTRY_HUNGARY           = 12, /**< HUNGARY              */
    APP_USBD_HID_COUNTRY_INTERNATIONAL_ISO = 13, /**< INTERNATIONAL_ISO    */
    APP_USBD_HID_COUNTRY_ITALIAN           = 14, /**< ITALIAN              */
    APP_USBD_HID_COUNTRY_JAPAN_KATAKANA    = 15, /**< JAPAN_KATAKANA       */
    APP_USBD_HID_COUNTRY_KOREAN            = 16, /**< KOREAN               */
    APP_USBD_HID_COUNTRY_LATIN_AMERICAN    = 17, /**< LATIN_AMERICAN       */
    APP_USBD_HID_COUNTRY_NETHERLANDS_DUTCH = 18, /**< NETHERLANDS_DUTCH    */
    APP_USBD_HID_COUNTRY_NORWEGIAN         = 19, /**< NORWEGIAN            */
    APP_USBD_HID_COUNTRY_PERSIAN_FARSI     = 20, /**< PERSIAN_FARSI        */
    APP_USBD_HID_COUNTRY_POLAND            = 21, /**< POLAND               */
    APP_USBD_HID_COUNTRY_PORTUGUESE        = 22, /**< PORTUGUESE           */
    APP_USBD_HID_COUNTRY_RUSSIA            = 23, /**< RUSSIA               */
    APP_USBD_HID_COUNTRY_SLOVAKIA          = 24, /**< SLOVAKIA             */
    APP_USBD_HID_COUNTRY_SPANISH           = 25, /**< SPANISH              */
    APP_USBD_HID_COUNTRY_SWEDISH           = 26, /**< SWEDISH              */
    APP_USBD_HID_COUNTRY_SWISS_FRENCH      = 27, /**< SWISS_FRENCH         */
    APP_USBD_HID_COUNTRY_SWISS_GERMAN      = 28, /**< SWISS_GERMAN         */
    APP_USBD_HID_COUNTRY_SWITZERLAND       = 29, /**< SWITZERLAND          */
    APP_USBD_HID_COUNTRY_TAIWAN            = 30, /**< TAIWAN               */
    APP_USBD_HID_COUNTRY_TURKISH_Q         = 31, /**< TURKISH_Q            */
    APP_USBD_HID_COUNTRY_UK                = 32, /**< UK                   */
    APP_USBD_HID_COUNTRY_US                = 33, /**< US                   */
    APP_USBD_HID_COUNTRY_YUGOSLAVIA        = 34, /**< YUGOSLAVIA           */
    APP_USBD_HID_COUNTRY_TURKISH_F         = 35, /**< TURKISH_F            */
} app_usbd_hid_country_code_t;

/**
 * @brief HID descriptor types.
 *
 * @ref app_usbd_hid_descriptor_t::bRDescriptorType
 */
typedef enum {
    APP_USBD_HID_DESCRIPTOR_HID      = 0x21, /**< HID descriptor.      */
    APP_USBD_HID_DESCRIPTOR_REPORT   = 0x22, /**< REPORT descriptor.   */
    APP_USBD_HID_DESCRIPTOR_PHYSICAL = 0x23, /**< PHYSICAL descriptor. */
} app_usbd_hid_descriptor_type_t;

#pragma pack(push, 1)

/**
 * @brief HID report descriptor entry at the end of HID descriptor.
 *
 * @param size     Report descriptor size.
 */
#define APP_USBD_HID_REPORT_ITEM(size)      \
    APP_USBD_HID_DESCRIPTOR_REPORT, ((size) & 0xFF), ((size) / 256)


/**
 * @brief HID physical descriptor entry at the end of HID descriptor.
 *
 * @param size     Physical descriptor size.
 */
#define APP_USBD_HID_PHYSICAL_ITEM(size)    \
    APP_USBD_HID_DESCRIPTOR_PHYSICAL, ((size) & 0xFF), ((size) / 256)


/**
 * @brief HID descriptor, binary layout.
 */
typedef union {
    struct  {
        uint8_t  bLength;            //!< Length of descriptor.
        uint8_t  bDescriptorType;    //!< Descriptor type @ref APP_USBD_HID_DESCRIPTOR_HID.
        uint16_t bcdHID;             //!< HID release number (BCD format, little endian).
        uint8_t  bCountryCode;       //!< Country code.
        uint8_t  bNumDescriptors;    //!< Number of class descriptors.
        struct {
            uint8_t  bRDescriptorType;   //!< Class descriptor type.
            uint16_t wDescriptorLength;  //!< Class descriptor length (little endian).
        } reports[];
    } raw;
} app_usbd_hid_descriptor_t;

#pragma pack(pop)


/**
 * @brief HID requests defined by specification.
 */
typedef enum {
    APP_USBD_HID_REQ_GET_REPORT   = 0x01,  /**< REPORT: device -> host (required).                     */
    APP_USBD_HID_REQ_GET_IDLE     = 0x02,  /**< IDLE: device -> host (not required).                   */
    APP_USBD_HID_REQ_GET_PROTOCOL = 0x03,  /**< PROTOCOL: device -> host (required for boot protocol). */
    APP_USBD_HID_REQ_SET_REPORT   = 0x09,  /**< REPORT: host -> device (not required).                 */
    APP_USBD_HID_REQ_SET_IDLE     = 0x0A,  /**< IDLE: no data stage (required for boot protocol).      */
    APP_USBD_HID_REQ_SET_PROTOCOL = 0x0B,  /**< PROTOCOL: no data stage(required for boot protocol).   */
} app_usbd_hid_req_t;

/**
 *  @brief HID report type.
 */
typedef enum {
    APP_USBD_HID_REPORT_TYPE_INPUT   = 0x01,/**< INPUT report type   */
    APP_USBD_HID_REPORT_TYPE_OUTPUT  = 0x02,/**< OUTPUT report type  */
    APP_USBD_HID_REPORT_TYPE_FEATURE = 0x03,/**< FEATURE report type */
} app_usbd_hid_report_type_t;



/**
 * @brief Helper macro for HID BCD release.
 *
 * @param major Hid release number major.
 * @param minor Hid release number minor.
 *
 * @ref app_usbd_hid_descriptor_t::bcdHID
 * @ref APP_USBD_HID_BCD_V1_11
 */
#define APP_USBD_HID_BCD_MAKE(major, minor) 0x##minor, 0x##major

/**
 * @brief HID 1.11 BCD value definition.
 *
 *  @ref app_usbd_hid_descriptor_t::bcdHID
 */
#define APP_USBD_HID_BCD_V1_11 APP_USBD_HID_BCD_MAKE(1, 11)

/**
 * @brief Initializer of interface descriptor for HID classes.
 *
 * @param interface_number  Interface number.
 * @param endpoints_num     Number of endpoints.
 * @param subclass          Subclass type @ref app_usbd_hid_subclass_t.
 * @param protocol          Protocol type @ref app_usbd_hid_protocol_t.
 */
#define APP_USBD_HID_INTERFACE_DSC(interface_number, endpoints_num, subclass, protocol) \
    /*.bLength =            */ sizeof(app_usbd_descriptor_iface_t),                     \
    /*.bDescriptorType =    */ APP_USBD_DESCRIPTOR_INTERFACE,                           \
    /*.bInterfaceNumber =   */ interface_number,                                        \
    /*.bAlternateSetting =  */ 0x00,                                                    \
    /*.bNumEndpoints =      */ endpoints_num,                                           \
    /*.bInterfaceClass =    */ APP_USBD_HID_CLASS,                                      \
    /*.bInterfaceSubClass = */ subclass,                                                \
    /*.bInterfaceProtocol = */ protocol,                                                \
    /*.iInterface = 0,      */ 0x00,                                                    \


/**
 * @brief Initializer of HID descriptor for HID classes.
 *
 * @param ...   Report/physical item list.
 */
#define APP_USBD_HID_HID_DSC(...)                                                                  \
    /*.bLength =           */ sizeof(app_usbd_hid_descriptor_t) + 3 * (NUM_VA_ARGS(__VA_ARGS__)),  \
    /*.bDescriptorType =   */ APP_USBD_HID_DESCRIPTOR_HID,                                         \
    /*.bcdHID =            */ APP_USBD_HID_BCD_V1_11,                                              \
    /*.bCountryCode =      */ APP_USBD_HID_COUNTRY_NOT_SUPPORTED,                                  \
    /*.bNumDescriptors =   */ (NUM_VA_ARGS(__VA_ARGS__)),                                          \
    /*.bRDescriptorType =  */ APP_USBD_HID_REPORT_ITEM(sizeof(GET_VA_ARG_1_(__VA_ARGS__))),        \
    /*.wDescriptorLength = */

/**
 * @brief Initializer of endpoint descriptor for HID classes.
 *
 * @param endpoint      Endpoint number.
 * @param ep_size       Endpoint size.
 * @param ep_interval   Endpoint interval (milliseconds).
 */
#define APP_USBD_HID_EP_DSC(endpoint, ep_size, ep_interval)                \
    /*.bLength =          */ sizeof(app_usbd_descriptor_ep_t),             \
    /*.bDescriptorType =  */ APP_USBD_DESCRIPTOR_ENDPOINT,                 \
    /*.bEndpointAddress = */ endpoint,                                     \
    /*.bmAttributes =     */ APP_USBD_DESCRIPTOR_EP_ATTR_TYPE_INTERRUPT,   \
    /*.wMaxPacketSize =   */ APP_USBD_U16_TO_RAW_DSC(ep_size),             \
    /*.bInterval =        */ ep_interval,                                  \



/** @} */

#endif /* APP_USBD_HID_TYPES_H__ */
