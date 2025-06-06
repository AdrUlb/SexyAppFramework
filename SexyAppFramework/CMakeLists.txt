add_library(SexyAppFramework STATIC
    Source/ImageLib/ImageLib.cpp
    Source/PakLib/PakInterface.cpp
    
    Source/BassMusicInterface.cpp
    Source/Buffer.cpp
    Source/ButtonWidget.cpp
    Source/Checkbox.cpp
    Source/Color.cpp
    Source/Common.cpp
    Source/CritSect.cpp
    Source/CursorWidget.cpp
    Source/D3D8Helper.cpp
    Source/D3DInterface.cpp
    Source/D3DTester.cpp
    Source/DDImage.cpp
    Source/DDInterface.cpp
    Source/Debug.cpp
    Source/DescParser.cpp
    Source/Dialog.cpp
    Source/DialogButton.cpp
    Source/DirectXErrorString.cpp
    Source/DSoundInstance.cpp
    Source/DSoundManager.cpp
    Source/EditWidget.cpp
    Source/Flags.cpp
    Source/FlashWidget.cpp
    Source/FModLoader.cpp
    Source/FModMusicInterface.cpp
    Source/Font.cpp
    Source/Graphics.cpp
    Source/HTTPTransfer.cpp
    Source/HyperlinkWidget.cpp
    Source/Image.cpp
    Source/ImageFont.cpp
    Source/Insets.cpp
    Source/ListWidget.cpp
    Source/KeyCodes.cpp
    Source/MemoryImage.cpp
    Source/ModVal.cpp
    Source/MTRand.cpp
    Source/MusicInterface.cpp
    Source/NativeDisplay.cpp
    Source/PerfTimer.cpp
    Source/PropertiesParser.cpp
    Source/Quantize.cpp
    Source/Ratio.cpp
    Source/ResourceManager.cpp
    Source/SEHCatcher.cpp
    Source/SexyAppBase.cpp
    Source/SexyMatrix.cpp
    Source/SharedImage.cpp
    Source/Slider.cpp
    Source/ScrollbarWidget.cpp
    Source/ScrollbuttonWidget.cpp
    Source/SWTri.cpp
    Source/SysFont.cpp
    Source/Widget.cpp
    Source/WidgetContainer.cpp
    Source/WidgetManager.cpp
    Source/XMLParser.cpp
)

target_include_directories(SexyAppFramework PUBLIC Include ${BASS_INCLUDE_PATH})
target_link_libraries(SexyAppFramework PRIVATE png ogg jpeg ${BASS_LIB_PATH} winmm.lib Ws2_32.lib)
