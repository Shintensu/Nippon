#pragma once

#include <Common/Forward.h>
#include <Common/Types.h>

namespace Nippon
{
#pragma pack(push, 1)

	struct Object
	{
		U8 ArchiveId; // lots of values 00-fe
		U8 FolderId; // category id - which folder it comes from
		U8 Unknown3; // 00, 10, 20, 30, 40, 50, 60, 70, 80, 90
		U8 Unknown4; // always 00
		U8V3 Scale;
		U8V3 Rotation;
		U16V3 Position;
		U32 Unknown5; // a lot of values, only first byte is used.
		U32 Unknown6; // a lot of values, only first byte is used.
		U8 Unknown7; // 00-0c
		U8 Unknown8; // lots of values
		U8 Padding[14];
	};

#pragma pack(pop)
}