#define STB_IMAGE_IMPLEMENTATION
#include "../stb_image.h"
#ifdef __cplusplus
extern "C" {
#endif

	__declspec(dllexport) void* loadFromMemory(stbi_uc const * buffer, int len, int& x, int& y, int& channelsInFile, int desiredChannels)
	{
		return stbi_load_from_memory(buffer, len, &x, &y, &channelsInFile, desiredChannels);
	}

	__declspec(dllexport) void imageFree(void* buffer)
	{
		stbi_image_free(buffer);
	}

#ifdef __cplusplus
}
#endif