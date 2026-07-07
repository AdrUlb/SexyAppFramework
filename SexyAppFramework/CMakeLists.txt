set(SOURCES
		Include/SexyAppFramework/AutoCrit.h
		Include/SexyAppFramework/BassMusicInterface.h Source/BassMusicInterface.cpp
		Include/SexyAppFramework/BassLoader.h Source/BassLoader.cpp
		Include/SexyAppFramework/BltRotatedHelper.h
		Include/SexyAppFramework/Buffer.h Source/Buffer.cpp
		Include/SexyAppFramework/ButtonListener.h
		Include/SexyAppFramework/ButtonWidget.h Source/ButtonWidget.cpp
		Include/SexyAppFramework/Checkbox.h Source/Checkbox.cpp
		Include/SexyAppFramework/CheckboxListener.h
		Include/SexyAppFramework/DialogButton.h Source/DialogButton.cpp
		Include/SexyAppFramework/Color.h Source/Color.cpp
		Include/SexyAppFramework/Common.h Source/Common.cpp
		Include/SexyAppFramework/CritSect.h Source/CritSect.cpp
		Include/SexyAppFramework/D3D8Helper.h Source/D3D8Helper.cpp
		Include/SexyAppFramework/D3DInterface.h Source/D3DInterface.cpp
		Include/SexyAppFramework/D3DTester.h Source/D3DTester.cpp
		Include/SexyAppFramework/DDI_Additive.h Include/SexyAppFramework/DDI_AlphaBlt.h Include/SexyAppFramework/DDI_NormalBlt_Volatile.h Include/SexyAppFramework/DDI_BltRotated.h Include/SexyAppFramework/DDI_BltRotated_Additive.h
		Include/SexyAppFramework/DDI_FastBlt_NoAlpha.h Include/SexyAppFramework/DDI_FastStretch.h Include/SexyAppFramework/DDI_FastStretch_Additive.h
		Include/SexyAppFramework/DDImage.h Source/DDImage.cpp
		Include/SexyAppFramework/DDInterface.h Source/DDInterface.cpp
		Include/SexyAppFramework/Debug.h Source/Debug.cpp
		Include/SexyAppFramework/DescParser.h Source/DescParser.cpp
		Include/SexyAppFramework/Dialog.h Source/Dialog.cpp
		Include/SexyAppFramework/DialogButton.h Source/DialogButton.cpp
		Include/SexyAppFramework/DialogListener.h
		Include/SexyAppFramework/DirectXErrorString.h Source/DirectXErrorString.cpp
		Include/SexyAppFramework/DSoundInstance.h Source/DSoundInstance.cpp
		Include/SexyAppFramework/DSoundManager.h Source/DSoundManager.cpp
		Include/SexyAppFramework/EditWidget.h Source/EditWidget.cpp
		Include/SexyAppFramework/dsoundversion.h
		Include/SexyAppFramework/EditListener.h
		Include/SexyAppFramework/Flags.h Source/Flags.cpp
		Include/SexyAppFramework/FModLoader.h Source/FModLoader.cpp Include/SexyAppFramework/fmod.h
		Include/SexyAppFramework/FModMusicInterface.h Source/FModMusicInterface.cpp
		Include/SexyAppFramework/Font.h Source/Font.cpp
		Include/SexyAppFramework/GENERIC_DrawLineAA.h
		Include/SexyAppFramework/Graphics.h Source/Graphics.cpp
		Include/SexyAppFramework/HTTPTransfer.h Source/HTTPTransfer.cpp
		Include/SexyAppFramework/HyperlinkWidget.h Source/HyperlinkWidget.cpp
		Include/SexyAppFramework/Image.h Source/Image.cpp
		Include/SexyAppFramework/ImageFont.h Source/ImageFont.cpp
		Include/SexyAppFramework/Insets.h Source/Insets.cpp
		Include/SexyAppFramework/KeyCodes.h Source/KeyCodes.cpp
		Include/SexyAppFramework/ListListener.h
		Include/SexyAppFramework/ListWidget.h Source/ListWidget.cpp
		Include/SexyAppFramework/ModVal.h Source/ModVal.cpp
		Include/SexyAppFramework/memmgr.h
		Include/SexyAppFramework/MemoryImage.h Source/MemoryImage.cpp
		Include/SexyAppFramework/MI_AdditiveBlt.h Include/SexyAppFramework/MI_BltRotated.h Include/SexyAppFramework/MI_BltRotated_Additive.h Include/SexyAppFramework/MI_GetNativeAlphaData.h Include/SexyAppFramework/MI_GetRLAlphaData.h Include/SexyAppFramework/MI_NormalBlt.h Include/SexyAppFramework/MI_SlowStretchBlt.h
		Include/SexyAppFramework/MTRand.h Source/MTRand.cpp
		Include/SexyAppFramework/MusicInterface.h Source/MusicInterface.cpp
		Include/SexyAppFramework/NativeDisplay.h Source/NativeDisplay.cpp
		Include/SexyAppFramework/PerfTimer.h Source/PerfTimer.cpp
		Include/SexyAppFramework/Point.h
		Include/SexyAppFramework/PropertiesParser.h Source/PropertiesParser.cpp
		Include/SexyAppFramework/Quantize.h Source/Quantize.cpp
		Include/SexyAppFramework/Ratio.h Source/Ratio.cpp
		Include/SexyAppFramework/Rect.h
		Include/SexyAppFramework/ResourceManager.h Source/ResourceManager.cpp
		Include/SexyAppFramework/ScrollbarWidget.h Source/ScrollbarWidget.cpp
		Include/SexyAppFramework/ScrollbuttonWidget.h Source/ScrollbuttonWidget.cpp
		Include/SexyAppFramework/ScrollListener.h
		Include/SexyAppFramework/SEHCatcher.h Source/SEHCatcher.cpp
		Include/SexyAppFramework/SexyAppBase.h Source/SexyAppBase.cpp
		Include/SexyAppFramework/SexyMatrix.h Source/SexyMatrix.cpp
		Include/SexyAppFramework/SexyVector.h
		Include/SexyAppFramework/SharedImage.h Source/SharedImage.cpp
		Include/SexyAppFramework/Slider.h Source/Slider.cpp
		Include/SexyAppFramework/SliderListener.h
		Include/SexyAppFramework/SoundInstance.h
		Include/SexyAppFramework/SoundManager.h
		Include/SexyAppFramework/SWTri.h Source/SWTri.cpp
		Include/SexyAppFramework/SWTri_DrawTriangle.h Include/SexyAppFramework/SWTri_DrawTriangleInc1.h Include/SexyAppFramework/SWTri_DrawTriangleInc2.h Include/SexyAppFramework/SWTri_GetTexel.h Include/SexyAppFramework/SWTri_Loop.h
		Include/SexyAppFramework/SWTri_Pixel555.h Include/SexyAppFramework/SWTri_Pixel565.h Include/SexyAppFramework/SWTri_Pixel888.h Include/SexyAppFramework/SWTri_Pixel8888.h Include/SexyAppFramework/SWTri_TexelARGB.h
		Include/SexyAppFramework/SysFont.h Source/SysFont.cpp
		Include/SexyAppFramework/TriVertex.h
		Include/SexyAppFramework/Widget.h Source/Widget.cpp
		Include/SexyAppFramework/WidgetContainer.h Source/WidgetContainer.cpp
		Include/SexyAppFramework/WidgetManager.h Source/WidgetManager.cpp
		Include/SexyAppFramework/XMLParser.h Source/XMLParser.cpp
)
add_library(SexyAppFramework STATIC ${SOURCES})
target_include_directories(SexyAppFramework PUBLIC Include)
target_include_directories(SexyAppFramework PRIVATE Include/SexyAppFramework)
target_link_libraries(SexyAppFramework PRIVATE winmm ws2_32 PakLib ImageLib ogg)
target_link_libraries(SexyAppFramework PUBLIC bass)
