#ifndef MAINFEATURES_H
#define MAINFEATURES_H

#include <tagparser/tagvalue.h>

#include <vector>

namespace ApplicationUtilities {

typedef std::vector<std::string> StringVector;
class Argument;

}

namespace Cli {

void printFieldNames(const ApplicationUtilities::StringVector &parameterValues);
void generateFileInfo(const ApplicationUtilities::StringVector &parameterValues, const ApplicationUtilities::Argument &inputFileArg, const ApplicationUtilities::Argument &outputFileArg, const ApplicationUtilities::Argument &validateArg);
void displayTagInfo(const ApplicationUtilities::StringVector &parameterValues, const ApplicationUtilities::Argument &filesArg);
void setTagInfo(const ApplicationUtilities::StringVector &parameterValues, const ApplicationUtilities::Argument &filesArg, const ApplicationUtilities::Argument &removeOtherFieldsArg, const ApplicationUtilities::Argument &treatUnknownFilesAsMp3FilesArg, const ApplicationUtilities::Argument &id3v1UsageArg, const ApplicationUtilities::Argument &id3v2UsageArg, const ApplicationUtilities::Argument &mergeMultipleSuccessiveTagsArg, const ApplicationUtilities::Argument &id3v2VersionArg, const ApplicationUtilities::Argument &encodingArg);
void extractField(const ApplicationUtilities::StringVector &parameterValues, const ApplicationUtilities::Argument &inputFileArg, const ApplicationUtilities::Argument &outputFileArg);
void removeBackupFiles(const ApplicationUtilities::StringVector &parameterValues, const ApplicationUtilities::Argument &recursiveArg);

}

#endif // MAINFEATURES_H