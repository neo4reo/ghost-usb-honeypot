#ifndef PORTCTL_H
#define PORTCTL_H

#define GHOST_MAGIC_NUMBER 0xFEEDABCD

typedef enum {
	OpcodeEnable,
	OpcodeDisable
} GHOST_PORT_OPCODE;

typedef struct _REQUEST_PARAMETERS {
	ULONG MagicNumber;	// always set to GHOST_MAGIC_NUMBER
	GHOST_PORT_OPCODE Opcode;
	UCHAR DeviceID;
	LARGE_INTEGER ImageSize;	// in bytes
	USHORT ImageNameLength;	// in characters
	WCHAR ImageName[1];
} REQUEST_PARAMETERS, *PREQUEST_PARAMETERS;

#endif

#ifdef DEFINE_GUID
// {171721E5-8A83-4a8b-AE95-2466F6429466}
DEFINE_GUID(GUID_DEVINTERFACE_GHOST, 0x171721e5, 0x8a83, 0x4a8b, 0xae, 0x95, 0x24, 0x66, 0xf6, 0x42, 0x94, 0x66);
#endif